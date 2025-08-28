// #include <iostream>
// using namespace std;

// void con(string s,string t){
//     string som;
//     int a=s.length();
//     int b=t.length();
//     som.resize(a+b);
//     for (int i=0;i<a;i++){
//         som.at(i)=s.at(i);
//     }
//     for (int i=0;i<b;i++){
//         som.at(a+i)=t.at(i);
//     }
//     cout<<som;

// }
// int main(){
//     string s="Hello ";
//     string t="World!";
//     con(s,t);
//}

// #include <iostream>
// using namespace std;

// void reverse(string &som){
//     int a=som.length();\
//     for (int i=0;i<a/2;i++){
//         int temp=som.at(i);
//         som.at(i)=som.at(a-1-i);
//         som.at(a-i-1)=temp;
//     }
//     cout<<som;
// }

// int main(){
//     string abc="hello";
//     reverse(abc);
//     cout<<abc;
// }

// #include <iostream>
// using namespace std;

// void vowel(string som){
//     string abc="";
//     int a=som.length();
//     for (int i=0;i<a;i++){
//         if(som.at(i)!='a' && som.at(i)!='e' && som.at(i)!='i' && som.at(i)!='o' && som.at(i)!='u' && som.at(i)!='A' && som.at(i)!='E' && som.at(i)!='I' && som.at(i)!='O' && som.at(i)!='U'){
//             abc+=som.at(i);
//         }
//     }
//     cout<<abc;
// }

// int main(){
//     string som="abcsedoudd";
//     vowel(som);
// }

// #include <iostream>
// using namespace std;

// void sort(string abc){
//     int a=abc.length();
//     for (int i=0;i<a;i++){
//         for (int j=i+1;j<a;j++){
//             if((int)abc.at(i)>(int)abc.at(j)){
//                 int temp=abc.at(i);
//                 abc.at(i)=abc.at(j);
//                 abc.at(j)=temp;
//             }
//         }
//     }
//     cout<<abc;
// }
// int main(){
//     string a="adecb";
//     sort(a);
// }

#include <iostream>
using namespace std;

void upper(string som){
    int a=som.length();
    for (int i=0;i<a;i++){
        if(som[i]>='A' && som[i]<='Z'){
            som.at(i)=(int)som.at(i)+32;
        }
    }
    cout<<som;
}

int main(){
    string a="SOMRAJ";
    upper(a);
}
