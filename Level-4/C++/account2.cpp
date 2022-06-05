#include<iostream>
using namespace std;
class account2
{
private:
    string accHolder;
    string accNumber;
    int balance;
public:
    account2(){
        this->accHolder="Unknown Holder";
        this->accNumber="Unknown Number";
        this->balance=0;
    }
    
    void showData(){
        cout<<accHolder<<"\t"<<accNumber<<"\t"<<balance<<endl;
    }
};



int main(){
    account2 account1;
    account1.showData();
    return 0;
}