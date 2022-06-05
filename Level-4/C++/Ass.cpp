#include<iostream>
using namespace std;

void calculateDiscountItem(){
    int itemPrize,afterPrize,discountValue;
    cout<<"Enter item prize: ";
    cin>>itemPrize;
    cout<<"Enter discount value:";
    cin>>discountValue;
    int DP=itemPrize*(discountValue*0.01);
    afterPrize=itemPrize-DP;
    cout<<"After discount prize :"<<afterPrize<<endl;


}

int main(){
    calculateDiscountItem();
    return 0;
}