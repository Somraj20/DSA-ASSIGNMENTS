#include <iostream>
using namespace std;

void bubbleSort(int som[],int size){
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(som[i]>som[j]){
                int temp=som[i];
                som[i]=som[j];
                som[j]=temp;
            }
        }
    }

}

int main(){
    int som[]={64,34,25,12,22,11,90};
    bubbleSort(som,6);
    for (int i=0;i<6;i++){
        cout<<som[i]<<endl;
    }

}
