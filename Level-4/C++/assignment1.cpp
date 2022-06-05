#include<iostream>
using namespace std;
int main(){
    int myDays;
    cout<<"Enter days to caculate:";
    cin>>myDays;
    int years = myDays/365;//get years
    int day = myDays%365;
    int months = day/30;//get months
    int days = day%30;
    cout<<years<<"Years:"<<months<<"Months:"<<days<<"Days:"<<endl;

    return 0;
}