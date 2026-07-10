#include<iostream>
using namespace std;
/*
1
01
101
*/
int main(){
    int m;
    cout<<"Enter the no. of rows :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2!=0)
                cout<<"0 ";
            else
                cout<<"1 ";
            
        }
        
        cout<<endl;
    }
}