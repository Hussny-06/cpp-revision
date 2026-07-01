#include<iostream>
using namespace std;

/*
output:
3 1
1 3
0 4
-1 5

logic:
when x becomes 2 y also becomes 2
so it continues
*/
int main(){
    int x=4, y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y)
           continue;
        else
           cout<<x<<" "<<y<<endl;
    }
}