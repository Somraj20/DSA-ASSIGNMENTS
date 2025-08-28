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
    for(int i=0;i<n;i++){
        int sumRow=0;
        for (int j=0;j<m;j++){
            sumRow+=array[i][j];
        }
        cout<<"sum of "<<i+1<<" Row is"<<endl;
        cout<<sumRow<<endl;;
    }
    for(int i=0;i<m;i++){
        int sumCol=0;
        for (int j=0;j<n;j++){
            sumCol+=array[j][i];
        }
        cout<<"sum of "<<i+1<<" coloumn is"<<endl;
        cout<<sumCol<<endl;
    }

}
