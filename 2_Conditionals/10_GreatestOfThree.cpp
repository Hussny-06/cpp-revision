#include<iostream>
using namespace std;

/*
for the smallest of the three
just flip the signs
*/

int main(){
    int a,b,c;
    cout<<"Enter the value of a, b and c :";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c)
            cout<<a<<" is the greatest";
        else
            cout<<c<<" is the greatest";
    }
    else{
        if(b>c)
            cout<<b<<" is the greatest";
        else
            cout<<c<<" is the greatest";
    }
    return 0;
}