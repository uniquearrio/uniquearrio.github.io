#include<iostream>
using namespace std;
int main(){
    int firstNumber,secondNumber;
    bool result;
    cout << "Enter First Number:";
    cin>>firstNumber;
    cout<< "Enter First Number:";
    cin>>secondNumber;
    result = (firstNumber==secondNumber);//compare first is equal to second
    cout<<firstNumber<<" == "<<secondNumber<<"? is:"<<result<<endl;
     result = (firstNumber!=secondNumber);//compare first is notequal to second
    cout<<firstNumber<<" != "<<secondNumber<<"? is:"<<result<<endl;
    result = (firstNumber>=secondNumber);//compare first is gthan or equal to second
    cout<<firstNumber<<" >= "<<secondNumber<<"? is:"<<result<<endl;
    result = (firstNumber<=secondNumber);//compare first is l than or equal to second
    cout<<firstNumber<<" <= "<<secondNumber<<"? is:"<<result<<endl;
    
    return 0;
}