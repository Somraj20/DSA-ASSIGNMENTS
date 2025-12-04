#include <iostream>
#include <stack>
using namespace std;

int evaluate(string s){
    stack<char> som;
    int y=s.length();
    for (int i=0;i<y;i++){
        if (s[i]>='0' && s[i]<='9'){
            som.push(s[i]-'0');
        }
        else{
            int val1=som.top(); som.pop();
            int val2=som.top(); som.pop();

            switch(s[i]){
                case '+':som.push(val2+val1); break;
                case '*': som.push(val2*val1); break;
                case '/': som.push(val2/val1); break;
                case '-': som.push(val2-val1); break;
                case '^': som.push(val2^val1); break;
            }
        }
    }
    return som.top();
}

int main(){
    string s="231*+9-";
    int y=evaluate(s);
    cout<<y<<endl;
}
