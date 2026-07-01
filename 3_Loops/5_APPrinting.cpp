#include<iostream>
using namespace std;

/*
1 3 5 7 9 ..... n
to find the nth term we can use the formula : 
2n-1
*/
int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    for( int i=1; i<=2*n-1; i+=2){
        cout<<i<<" ";
    }
    return 0;
}