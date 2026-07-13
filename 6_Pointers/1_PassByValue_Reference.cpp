#include<iostream>
using namespace std;

void Swap(int x, int y){
    x = x+y;
    y = x-y;
    x = x-y;
}

void swap(int& x, int& y){ // use of & enables pass by reference , we can also use * to pass the address
    x = x+y;
    y = x-y;
    x = x-y;
}

int main(){
    int x,y;
    cout<<"Enter two Numbers : ";
    cin>>x>>y;
    Swap(x,y); // Here Swap was done using Pass by Value
    cout<<x<<" "<<y<<endl<<"Here Swap was done using Pass by Value"<<endl<<"which did not affect the instance of x and y in main function"<<endl;
    swap(x,y); // Here Swap was done using Pass by Reference
    cout<<x<<" "<<y<<endl<<"Here Swap was done using Pass by Reference"<<endl<<"which did affect the instance of x and y in main function"<<endl;
}