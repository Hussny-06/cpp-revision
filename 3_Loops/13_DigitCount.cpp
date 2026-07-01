#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int count = 0;
    for(int i=0; n>0; i++){
        n /= 10;
        count++;
    }
    cout<<"digit count is : "<<count;
}