#include <iostream>
using namespace std;

class stack{
    public:
    int maxsize;
    int *arr;
    int top;
    stack(){
        maxsize=10;
        top=-1;
        arr=new int[maxsize];
    }
    bool isFull(){
        if (top>=maxsize-1) return true;
        return false;
    }

    bool isEmpty(){
        if (top==-1) return true;
        return false;
    }
    void push(int x){
        if(isFull()) cout<<"Full"<<endl;
        else{
            top++;
            arr[top]=x;
        }
    }

    int pop(){
        if (isEmpty()) cout<<"empty"<<endl;
        else{
            int x=arr[top];
            top--;
            return x;
        }
    }

    int peek(){
        return arr[top];
    }

    void display(){
        if(isEmpty()){
            cout<<"empty<<endl";
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    stack som;
    som.push(5);
    som.display();
    som.push(7);
    som.display();
    som.pop();
    som.display();
    som.push(1);
    int c=som.peek();
    cout<<c<<endl;
}
