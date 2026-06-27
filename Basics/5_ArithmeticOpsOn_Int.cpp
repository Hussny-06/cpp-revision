#include<iostream>
using namespace std;

int main(){
    int x = 5, y = 2;
    cout<< x+y  << endl;
    cout<< x-y  << endl;
    cout<< x*y  << endl;
    cout<< x/y  << endl;    // int data type has no decimal so the result of two int data type is also supposed to be int , i.e compiler doesn't store the .5
                            // to deal with these we can use float data type
      
    cout<< x%y  << endl;    // these is modulo operator , prints the remainder on division os two numbers
}