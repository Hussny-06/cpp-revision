#include<iostream>
using namespace std;

int main(){
    int i;
    for(i=1; i<=5; i++)
        cout<<i<<endl;
    cout<<i<<endl;
    for(int j=1; j<=5; j++){
        cout<<j<<endl;
    }
    cout<<j<<endl; // will throw error as its extent of scope is only till the above for loop
}