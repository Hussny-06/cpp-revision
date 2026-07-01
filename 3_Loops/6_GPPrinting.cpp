#include<iostream>
using namespace std;
/*
1 2 4 8 16..... n

*/
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a*=2;
    }
    return 0;
}