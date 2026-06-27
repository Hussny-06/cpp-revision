#include<iostream>
using namespace std;

int main(){
    int x = 5, y = 9;
    cout<< x*y << endl;
    cout<<" now the value of x will be updated by next line"<< endl;
    x = 8; // updation or overwriting data
    cout<< x<<endl;
    
    cout<<"value of x incremented by 1"<<endl;
    x++; // increments value of x by 1
    cout<< x << endl;
    
    cout<<"value of x decremented by 1"<<endl;
    x--; // decrements value of x by 1
    cout<< x << endl;

    cout<<"value of x manipulated using + - * / into any number"<<endl;
    x = x + 5;
    cout<< x << endl;

    cout<<" short form "<< endl;
    x =- 10;
    cout<< x << endl;
}
