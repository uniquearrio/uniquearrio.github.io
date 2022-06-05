#include<iostream>
using namespace std;
int main(){
    //assign value to variables;
    int a,b;
    a=7;
    b=2;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a+=b ;
    cout<<"Answer of a += b is :"<< a <<endl;
    a-=b ;
    cout<<"Answer of a -= b is :"<< a <<endl;
    a*=b ;
    cout<<"Answer of a *= b is :"<< a <<endl;
    a/=b ;
    cout<<"Answer of a /= b is :"<< a <<endl;
    a%=b ;
    cout<<"Answer of a %= b is :"<< a <<endl;
    return 0;
}