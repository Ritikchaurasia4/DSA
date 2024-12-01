#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

void preOrder(struct Node* root){    // preOrder  :    root , left substring , right substring

    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";   // first print root 

    preOrder(root->left);   // then print left substring

    preOrder(root->right);  // then print the right substring 

}

void inOrder(struct Node* root){  // inOrder :  left Substring , root , right substring

    if(root == NULL){
        return;
    }
    
    inOrder(root->left);    
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(struct Node* root){   // postOrder :  left substring , right substring , root

    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root -> right);
    cout<<root->data<<" ";
}

int main(){
    struct Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

   /*         1
            /   \
           2     3
          / \   /  \
         4   5  6   7

    */
    
    cout<<"Preorder: ";
    preOrder(root);

    cout<<endl;

    cout<<"Inorder: ";
    inOrder(root);

    cout<<endl;

    cout<<"Postorder: ";
    postOrder(root);

    return 0;
}
