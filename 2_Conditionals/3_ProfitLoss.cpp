#include<iostream>
using namespace std;

int main(){
    int cp, sp;
    cout<<"Enter the Cost price and Selling Price of Goods :";
    cin>>cp>>sp;
    if(sp>cp)
        cout<<"Seller made a Profit of : "<<sp-cp<<endl;
    else if (cp>sp)
        cout<<"Seller made a Loss of : "<<cp-sp<<endl;
    else
        cout<<"No Profit No Loss";
}