#include <iostream>
#include <stack>
using namespace std;

bool validParen(string ss){
    stack<char> som;
    int y=ss.length();
    for (int i=0;i<y;i++){
        if (ss[i]=='(' || ss[i]=='{' || ss[i]=='['){
            som.push(ss[i]);
        }
        else{
            if (som.empty()){
                return false;
            }
            else{
                if (som.top()=='{' && ss[i]=='}' ||
                    som.top()=='[' && ss[i]==']'||
                    som.top()=='(' && ss[i]==')'){
                        som.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    string h="({[{]})";
    bool x=validParen(h);
    cout<<x<<endl;

}
