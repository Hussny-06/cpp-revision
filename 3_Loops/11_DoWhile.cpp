#include<iostream>
using namespace std;
/*
do while loop
we use do while loop when we want to execute the code at least once
*/
int main(){
    int i=11;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);
    return 0;
}
/*
Difference between while and do while loop
while loop (pre-test loop) checks the condition before executing the code
do while loop (post-test loop) checks the condition after executing the code
*/