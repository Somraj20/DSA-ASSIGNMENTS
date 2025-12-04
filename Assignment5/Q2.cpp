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

int count(Node* head,int k){
    Node* temp=head;
    int count=0;
    while(temp!=nullptr){
        if (k==temp->val){
            count++;
        }
        temp=temp->next;
    }
    return count;
}

Node* deleteOccurence(Node* head,int k){
    if (head->val==k){
        head=head->next;
    }
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        if(temp->val==k){
            prev->next=temp->next;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
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
    int arr[]={1,2,1,2,1,3,1};
    Node* head=arrToLL(arr,7);
    int y=count(head,1);
    cout<<y<<endl;
    head=deleteOccurence(head,1);
    display(head);
}
