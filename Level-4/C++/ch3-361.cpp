#include<iostream>
using namespace std;
int main(){
    int num;
    string result;
    cout<<"enter any number: ";
    cin>>num;
    result=(num%2==0)?"even":"odd";
    cout<<"num si: "<<result;
    return 0;
}