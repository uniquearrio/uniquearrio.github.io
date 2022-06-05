#include<iostream>
using namespace std;
int main(){
    int a = 2;
    //a++;
    cout<<"value of a after increment: a="<<++a <<endl;
    cout<<"after cout a = "<<a<<endl;
    int b=5;
    cout<<"value of b after decrement: b="<<--b <<endl;
    int c = ++a + b;
    int d = a + b--;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"value of a after operation a= "<<a<<endl;
    cout<<"value of b after operation b= "<<b<<endl;
    return 0;
}