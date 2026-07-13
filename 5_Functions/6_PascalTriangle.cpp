#include<iostream>
using namespace std;
/*
n
 C   = n! / r! x (n-r)!
  r
*/
/*
i
 C
  j
*/

int fact(int n){
  if(n>=1)
    return n*fact(n-1);
  else
    return 1;

  return 0;
}

int Comb(int n, int r){
  return fact(n)/(fact(r)*fact(n-r));
}

int main(){
  int n;
  cout<<"Enter n : ";
  cin>>n;
  for(int i=0; i<=n; i++){
    for(int j=n-i+1; j>=1; j--){
        cout<<" ";
    }
    for(int j=0; j<=i; j++){
        cout<<" "<<Comb(i,j)<<" ";
    }
    cout<<endl;
  }
}