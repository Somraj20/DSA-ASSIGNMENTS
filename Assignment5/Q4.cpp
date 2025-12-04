#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int u){
        val=u;
        next=nullptr;
    }
    Node(int u,Node* t){
        val=u;
        next=t;
    }
};

Node* arrToLL(int arr[],int size){
    Node* y=new Node(arr[0]);
    Node* head=y;
    for (int i=1;i<size;i++){
        Node* t=new Node(arr[i]);
        y->next=t;
        y=t;
    }
    return head;
}

Node* reverse(Node* head){
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        Node* y=temp->next;
        temp->next=prev;
        prev=temp;
        temp=y;
    }
    return prev;
}

void display(Node* head){
    Node* temp=head;
    while(temp->next!=nullptr){
        cout<<temp->val<<"-->";
        temp=temp->next;
    }
    cout<<temp->val;
}
int main(){
    int arr[]={2,4,6,4};
    Node* head=arrToLL(arr,4);
    head=reverse(head);
    display(head);

}
