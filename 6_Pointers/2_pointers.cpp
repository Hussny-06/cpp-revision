#include<iostream>
using namespace std;

int main(){
    int x=10;
    int *p=&x;
    cout<<x<<endl; //prints the value of x
    *p = 100; //changes the value of x
    cout<<*p<<endl; //prints the value of x
    cout<<&x<<endl; //prints the address of x
    cout<<p<<endl; //prints the address of x
    cout<<&p<<endl; //prints the address of pointer p
    cout<<sizeof(p)<<endl; //prints the size of pointer p
}