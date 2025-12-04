#include <iostream>
#include <stack>
using namespace std;

void reverse(string &n){
    stack<char> ss;
    int y=n.length();
    for (int i=0;i<y;i++){
        ss.push(n[i]);
    }
    for (int i=0;i<y;i++){
        char u=ss.top();
        ss.pop();
        n[i]=u;
    }
}

int main(){
    string apj="DataStructure";
    reverse(apj);
    cout<<apj<<endl;
}
