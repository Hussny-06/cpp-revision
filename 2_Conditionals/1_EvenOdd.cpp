#include<iostream>
using namespace std;

/*
this is Ternary Operator 
it works as:
if(condition?if true print this:if false print this)
*/
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    cout<<"the number is : "<<(n%2==0?"Even":"Odd")<<endl;
    return 0;
}