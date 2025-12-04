#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int v){
        data=v;
        left=nullptr;
        right=nullptr;
    } 
};

void preorder(Node* root){
    if (root==nullptr) return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if (root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

void postorder(Node* root){
    if (root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}

int main(){
    Node* r=new Node(4);
    r->left=new Node(7);
    r->right=new Node(5);
    r->left->left=new Node(7);
    preorder(r);
}
