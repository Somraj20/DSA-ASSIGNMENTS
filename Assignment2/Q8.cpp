#include <iostream>
using namespace std;

int ele(int arr[], int n) {
    int m = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (found==false) {
            m++;
        }
    }
    return m;
}

int main() {
    int som []={2,5,7,5,4,5,8,7};
    int y=ele(som,8);
    cout<<y;
}
