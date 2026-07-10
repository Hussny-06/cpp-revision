#include<iostream>
using namespace std;
/*
    *
    *
* * * * *
    *
    *
*/
int main(){
    int m;
    cout<<"Enter a odd no. :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            if( i == (m/2)+1 || j == (m/2)+1) 
                cout<<" * ";
            else
                cout<<"   ";
        }
        
        cout<<endl;
    }
}