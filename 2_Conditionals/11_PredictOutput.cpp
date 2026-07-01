#include<iostream>
using namespace std;

int main(){
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}
/*
the output is 10 10 0 
and the logic here is :
'=' assigns value from right to left
'<' assigns value from left to right
this is because of the precedence order 
= is assignment operator (right to left)
< is relational operator (left to right)
relational operator has higher precedence than assignment operator
relattional operator output only true or false 
so first x<10 is evaluated as false resulting in 0
and then 0 is assigned to z
*/