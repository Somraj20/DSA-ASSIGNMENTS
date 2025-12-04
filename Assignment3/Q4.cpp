#include <iostream>
#include <stack>
using namespace std;

int prio(char s){
    if (s=='^'){
        return 3;
    }
    else if (s=='*' || s=='/'){
        return 2;
    }
    else if (s=='+' || s=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string InfixToPostFix(string ss){
    stack<char> som;
    string h;
    int k=0;
    int y=ss.length();
    for (int i=0;i<y;i++){
        if (ss[i]>='a' && ss[i]<='z' || ss[i]>='A' && ss[i]<='Z' || ss[i]>='0' && ss[i]<='9'){
            h+=ss[i];
        }
        else if (ss[i]=='('){
            som.push(ss[i]);
        }
        else if (ss[i]==')'){
            while(som.top()!='('){
                h+=som.top();
                som.pop();
            }
            som.pop();
        }
        else{
            while(!som.empty() && (ss[i])<=prio(som.top())){
                h+=som.top();
                som.pop();
            }
            som.push(ss[i]);
        }
    }
    while(!som.empty()){
        h+=som.top();
        som.pop();
    }

    return h;
}

int main(){
    string s="(a+b)*(c+d)";
    s=InfixToPostFix(s);
    cout<<s<<endl;
}
