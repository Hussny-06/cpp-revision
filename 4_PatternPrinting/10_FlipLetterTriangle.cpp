#include<iostream>
using namespace std;
/*
ABC
AB
A
*/
int main(){
    int m;
    cout<<"Enter the no. of rows :";
    cin>>m;
    for(int i=m; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}