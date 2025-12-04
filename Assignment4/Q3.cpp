#include <iostream>
#include <queue>
using namespace std;

void interleave(int arr[],int size){
    queue<int> q;
    queue<int> y;
    int n=size;
    for (int i=0;i<n/2;i++){
        q.push(arr[i]);
    }
    for (int i=n/2;i<n;i++){
        y.push(arr[i]);
    }
    while(!q.empty() && !y.empty()){
        int a=q.front();
        q.pop();
        cout<<a<<endl;
        int b=y.front();
        y.pop();
        cout<<b<<endl;
    }

    if (!q.empty()){
        int a=q.front();
        q.pop();
        cout<<a<<endl;
    }
    if (!y.empty()){
        int b=y.front();
        y.pop();
        cout<<b<<endl;
    }
}

int main(){
    int arr[]={4,7,11,20,5,9,8};
    interleave(arr,7);
}
