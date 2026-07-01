#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    bool x = true;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            x = false;
            break;
        }
    }
    if(n==1){
        cout<<"Neither prime nor composite";
    }else{
        if(x==true)
            cout<<"Prime";
        else
            cout<<"Composite";
    }
    
    return 0;
}