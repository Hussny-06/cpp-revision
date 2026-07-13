#include<iostream>
using namespace std;

void sum(){
    int a,b;
    cout<<"Enter two Numbers : ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" & "<<b<<" is : "<<a+b;
}

// int Sum(int a, int b){
//     return a+b;
// }

int main(){
    sum();

    //different approach
    // int a,b,result;
    // cout<<"Enter two Numbers : ";
    // cin>>a>>b;

    // result = Sum(a,b);
    // cout<<"Sum of "<<a<<" & "<<b<<" is : "<<result;
}