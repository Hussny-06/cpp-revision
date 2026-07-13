#include<iostream>
using namespace std;
/*
n
 P   = n! / (n-r)!
  r
*/

int fact(int n){
  if(n>=1)
    return n*fact(n-1);
  else
    return 1;

  return 0;
}

int main(){
  int n, r, a, c;
  cout<<"Enter n and r : ";
  cin>>n>>r;
  a = fact(n);
  c = fact(n-r);
  cout<<"Combination for these n and r are : "<<a/c<<endl;
}