#include<iostream>
using namespace std;
/*
   *
  ***
 *****
*******
*/
int main(){
    int m;
    cout<<"Enter the no. of rows :";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}