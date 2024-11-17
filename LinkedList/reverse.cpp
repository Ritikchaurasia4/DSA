#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){   // constructor
        data = val;
        next = NULL;
    }
};

// insert at Head....

void insertAtHead(node* &head , int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

// Insert at Tail....

void insertAtTail(node* &head , int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;  // traverse from start to the last node
    while(temp -> next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;  
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* &head){
    node* previous = NULL;
    node* current = head;
    node* nextptr;

    while(current != NULL){
        nextptr = current->next;
        current->next = previous;

        previous = current;
        current = nextptr;

    }
    return previous;
}

int main(){
    node* head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    insertAtTail(head , 4);

    display(head);

   node* newhead = reverse(head);
   display(newhead);

}