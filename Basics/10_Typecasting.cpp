#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<"Tyepcasting a from int to float :"<<(float)a<<endl;
    cout<<"Typecasting a from int to char :"<<(char)a<<endl;

    int b, c;
    cout<<endl;
    cout<<"Enter two numbers :";
    cin>>b>>c;
    cout<<endl;
    cout<<"dividing b by c using typecasting to convert them to float :"<<b/(float)c<<endl;
    cout<<endl;
    cout<<"Typecasting b and c from int to char :"<<(char)b<<" "<<(char)c<<endl;
}
 