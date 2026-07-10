#include<iostream>
using namespace std;
/*
1
13
135
*/
int main(){
    int m;
    cout<<"Enter the no. of rows :";
    cin>>m;
    for(int i=1; i<=m; i++){
        int n = 1 ;
        for(int j=1; j<=i; j++){
            cout<<n<<" ";
            n += 2;
        }
        
        cout<<endl;
    }
}