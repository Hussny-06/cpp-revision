// tell if a number is a three digit number or not 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n>=100 && n<=999)
        cout<<"The number is a three digit number.";
    else
        cout<<"The number is not a three digit number.";
}