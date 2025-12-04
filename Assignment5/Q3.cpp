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

int middle(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    int x=0;
    int n=count/2;
    temp=head;
    while(temp!=nullptr){
        x++;
        if (x==count){
            return temp->val;
        }
        temp=temp->next;
    }
    return temp->val;
}

int main(){
    int arr[]={2,4,6,4};
    Node* head=arrToLL(arr,4);
    int y=middle(head);
    cout<<y<<endl;
}


