#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<0)
        n = -n;
    cout<<"The absolute value of the number is : "<<n<<endl;
    return 0;
}