#include<iostream>
using namespace std;
int main(){
    //declare variable a,b;
    int a,b;
    //a=4;
    //b=2;
    //hard code
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter Second Number:";
    cin>>b;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = (float)a / (float)b;
    int mod = a % b;
    cout << a <<" + "<< b << " = " << sum << endl;
        cout << a <<" + "<< b << " = " << a+b << endl;
        cout << a <<" % "<< b << " = " << mod << endl;
        cout << a <<" - "<< b << " = " << sub << endl;
        cout << a <<" * "<< b << " = " << mul << endl;
        cout << a <<" / "<< b << " = " << div << endl;
    return 0;
}