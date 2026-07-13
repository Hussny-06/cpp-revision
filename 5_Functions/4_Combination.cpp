#include<iostream>
using namespace std;
/*
n
 C   = n! / r! x (n-r)!
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
  int n, r, a, b, c;
  cout<<"Enter n and r : ";
  cin>>n>>r;
  a = fact(n);
  b = fact(r);
  c = fact(n-r);
  cout<<"Combination for these n and r are : "<<a/(b*c)<<endl;
}