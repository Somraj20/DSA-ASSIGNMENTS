#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    int som[n];
    int s=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(i==j){
                cin>>arr[i][j];
                som[s++]=arr[i][j];
            }
            else{
                arr[i][j]=0;
            }
        }
    }
}

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    int s=0;
    int som[n];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(i<j){
                arr[i][j]=0;
            }
            else{
                cin>>arr[i][j];
                som[s++]=arr[i][j];
            }
        }
    }
}

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    int s=0;
    int som[n];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(i>j){
                arr[i][j]=0;
            }
            else{
                cin>>arr[i][j];
                som[s++]=arr[i][j];
            }
        }
    }
}

#include <iostream>
using namespace std;
#include <vector>

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    int flag=0;
    int s=0;
    vector<int> som;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(i<=j){
                som.push_back(arr[i][j]);
            }
        }
    }
}
