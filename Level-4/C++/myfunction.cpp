#include<iostream>
using namespace std;
void checkEvenOrOdd(int num){
    if(num%2){
        cout<<num<<"is Odd"<<endl;
    }else{
        cout<<num<< "is Even"<<endl;
    }
}
int main(){
    int num1=123 , num2=456 ,num3=789;
    checkEvenOrOdd(num1);
    checkEvenOrOdd(num2);
    checkEvenOrOdd(num3);
    return 0;
}