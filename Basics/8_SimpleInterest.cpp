#include<iostream>
using namespace std;

int main(){
    float  P, R, T;
    cout<<"enter principal amount :";
    cin>>P;
    cout<<"enter Rate of Interest :";
    cin>>R;
    cout<<"enter Time Period in Years :";
    cin>>T;

    cout<<endl<<endl<<"Calculated Interest is :"<<(P*R*T)/100.0<<endl;
}