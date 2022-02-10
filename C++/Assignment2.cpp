#include<iostream>
using namespace std;
int main(){
    int productPrize;
    cout<<"Enter Product Prize: ";
    cin>>productPrize;
    int discountValue;
    cout<<"Enter Discount Value: ";
    cin>>discountValue;
    int afterDiscountPrice = productPrize-(productPrize*discountValue*0.01);
    cout<<"After discount price is : "<<afterDiscountPrice<<endl;

    return 0;
}