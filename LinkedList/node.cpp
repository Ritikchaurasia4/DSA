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

// Searching......

bool search(node* head , int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

// Deletion
void deletion(node* &head , int val){
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

int main(){
    node* head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    display(head);

    insertAtHead(head , 4);
    display(head);

    //<<search(head , 5);

    deletion(head , 2);
    display(head);
}