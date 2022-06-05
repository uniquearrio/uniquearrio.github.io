#include<iostream>
using namespace std;
class Account
{

public:
   string accountHolder;
   string accountNumber;
   int accountBalance;
   void createAccount(string accHolder,string accNumber){
       this->accountNumber=accountNumber;
       this->accountHolder=accountHolder;
       accountBalance=1000;

   }
   void deposit(int depositAmount){
       accountBalance = accountBalance + depositAmount;

   }
   bool withdraw(int withdrawAmount){
       if(withdrawAmount>accountBalance){
           return false;
       }else{
           accountBalance = accountBalance-withdrawAmount;
           return true;
       }
   }
   void showData(){
       cout<<"____________Current Info____"<<endl;
       cout<<"Account Holder Name: "<<accountHolder<<endl;
       cout<<"Account Number:  "<<accountNumber<<endl;
       cout<<"Account balance: "<<accountBalance<<endl;
   }
};



int main(){
    Account account1;
    account1.showData();
    account1.createAccount("Zaw Latt","12345");
    account1.showData();
    account1.deposit(20000);
    bool result= account1.withdraw(5000);
    if(result){
        account1.showData();
    }else{
        cout<<"Error kto withdraw! "<<endl;
    }
    return 0;
}