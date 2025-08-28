#include <iostream>
using namespace std;

void Duplicate(int som [],int size){
    int m=0;
    for (int i=0;i<size;i++){
        int flag=0;
        for (int j=1+i;j<size;j++){
            if (som[i]==som[j]){
                flag=1;
                break;
            }
        }
        if(flag==0) som[m++]=som[i];
    }
    for (int i=0;i<m;i++){
        cout<<som[i]<<" ";
    }
}
int main(){
    int som []={2,3,5,6,7,7};
    int size=6;
    Duplicate(som,size);

}
