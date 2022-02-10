#include<iostream>
using namespace std;
int main(){
    int loanAmount;
    cout<<"Enter loan amount:";
    cin>>loanAmount;
    int Rate;
    cout<<"Enter rate:";
    cin>>Rate;
    int numberMonth;
    cout<<"enter number of months:";
    cin>>numberMonth;
    int monthlyInterest = loanAmount*Rate*0.01;
    cout<<"Monthly interest is :"<<monthlyInterest<<endl;
    int yourInterest = numberMonth * monthlyInterest;
    cout<<"Your interest is :"<<yourInterest<<endl;



    return 0;
}