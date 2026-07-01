// WAP to find the highest factor of a number n except n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=n/2; i>=1; i--){
        if(n%i==0){
            cout<<"the Highest factor is : "<<i;
            break;
        }
    }
}