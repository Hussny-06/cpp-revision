#include<iostream>
using namespace std;
/*
1
23
456
*/
int main(){
    int m,count = 1;
    cout<<"Enter the no. of rows :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        
        cout<<endl;
    }
}