#include<iostream>
using namespace std;
/*
******
*    *
*    *
******
*/
int main(){
    int l,b;
    cout<<"Enter the length and breadth of Hollow Rectangle :";
    cin>>l>>b;
    for(int i=1; i<=b; i++){
        for(int j=1; j<=l; j++){
            if( j==1 || j==l || i==1 || i==b) 
                cout<<" * ";
            else
                cout<<"   ";
        }
        
        cout<<endl;
    }
}