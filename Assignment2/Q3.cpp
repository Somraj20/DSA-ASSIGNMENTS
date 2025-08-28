#include <iostream>
using namespace std;

int missing(int som [],int size){
    int flag=0;
    int m=1;
    while(flag==0){
        flag=1;
        for (int i=0;i<size;i++){
            if(som[i]==m){
                flag=0;
                break;
            }
        }
        if(flag==1) return m;
        m++;
    }
    return -1;
}

int main(){
    int som []={1,2,3,4,6};
    cout<<missing(som,5);
}

#include <iostream>
using namespace std;

int missing(int som [],int size){
    int flag=0;
    int m=1;
    while(flag==0){
        flag=1;
        int left=0;
        int right=size-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(m==som[mid]) {
                flag=0;
                break;
            }
            else if(m<som[mid]){
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }
        if(flag==1) return m;
        m++;
    }
    return -1;
}

int main(){
    int som []={1,2,3,4,6};
    cout<<missing(som,5);
}
