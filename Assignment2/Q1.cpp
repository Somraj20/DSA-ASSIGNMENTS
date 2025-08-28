#include <iostream>
using namespace std;

int binarySearch(int som [],int size,int target){
    int right=size-1;
    int left=0;
    while(right>=left){
        int mid=left+(right-left)/2;
        if (som[mid]==target) return mid;
        else if (som[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}

int main(){
    int som[]={1,2,3,5,7,9,3};
    cout<<binarySearch(som,7,2);
}
