#include<iostream>
using namespace std;
int main(){
        int time;
        cout<<"enter current time: ";
        cin>>time;
        string result=(time<10)?"good morning!":((time<20)?"good day!":"good evening!");
        cout<<result<<endl;

    return 0;
}