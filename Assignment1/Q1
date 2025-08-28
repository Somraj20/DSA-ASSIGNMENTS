#include <iostream>
using namespace std;

void create(int som [],int n){
    for (int i=0;i<n;i++){
        cin>>som[i];
    }
}

void display(int arr [],int n){
    for (int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insert(int a, int som[], int pos,int &n){
    if (pos>n || pos<0) cout<<"invalid";
    som[n+1];
    for (int i=n-1;i>=pos;i--){
        som[i+1]=som[i];
        
    }
    som[pos]=a;
    n++;
}
void deleteElement(int som[],int &n,int index){
    for (int i=index;i<n-1;i++){
        som[i]=som[i+1];
    }
    n--;
}

bool linearSearch(int som [],int a,int n){
    for (int i=0;i<n;i++){
        if (som[i]==a){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int som[n];
    create(som,n);
    display(som,n);
    // insert(7,som,2,n);
    // cout<<endl;
    // display(som,n);
    cout<<endl;
    // deleteElement(som,n,2);
    // display(som,n);
    cout<<linearSearch(som,4,n);

}
