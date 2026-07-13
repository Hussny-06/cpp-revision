/*
1. code which are used multiple times in a project 
   are written as function which avoids redundancy 

*/
#include<iostream>
using namespace std;
void greet(){
   cout<<"daijobu"<<endl;
}
int main(){
    greet();
}