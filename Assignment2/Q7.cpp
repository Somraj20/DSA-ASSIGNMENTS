#include <iostream>
using namespace std;


int arr(int arr [],int size){
    int inversion=0;
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(arr[j]<arr[i]) inversion++;
        }
    }
    return inversion;
}
int main(){
    int som[]={2,4,1,3,5};
    int a=arr(som,5);
    cout<<a<<endl;
}
