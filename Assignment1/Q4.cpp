#include <iostream>
using namespace std;
void reverseArray(int som[],int size){
    for (int i=0;i<(size/2);i++){
        int temp=som[i];
        som[i]=som[size-1-i];
        som[size-1-i]=temp;
    }
    for (int i=0;i<size;i++){
        cout<<som[i]<<" ";
    }
}
int main(){
    int som[]={2,3,5,6,8,6};
    reverseArray(som,6);
}

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter row & col of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows & cols of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!\n";
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout <<"\n";
    }
}


#include <iostream>
using namespace std;

int main(){
    cout<<"enter rows"<<endl;
    int n;
    cin>>n;
    cout<<"enter coloumns"<<endl;
    int m;
    cin>>m;
    int array[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    cout<<"array before transpose"<<endl;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<array[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<m;j++){
            int temp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=temp;
        }
    }

    cout<<"after transpose"<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<array[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

}
