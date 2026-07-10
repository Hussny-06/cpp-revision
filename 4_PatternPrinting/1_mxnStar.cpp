#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the no. of rows and columns :";
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}