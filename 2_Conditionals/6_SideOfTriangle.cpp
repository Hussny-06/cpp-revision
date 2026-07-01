#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the sides of the triangle :";
    cin>>a>>b>>c;
    if( (a+b>c) && (b+c>a) && (a+c>b) )
        cout<<"These are sides of a valid Triangle.";
    else
        cout<<"These are not sides of a valid Triangle.";
    return 0;
}