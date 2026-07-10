#include<iostream>
using namespace std;

/*
A A A 
B B B
C C C
*/
int main(){
    int m;
    cout<<"Enter the no. of rows :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}