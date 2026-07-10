#include<iostream>
using namespace std;
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
int main(){
    int m;
    cout<<"Enter the no. of rows :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i*2-1; j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for(int i=m-1; i>=1; i--){
        for(int j=1; j<=m-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}