#include<iostream>
using namespace std;
//global variable a
int a=10;
const float PI=3.14;
void display(){
    int ab=20;
    cout<<"value of a inside Display function:"<<a;
    a=50;
    cout<<"value of a inside Display fincton:"<<a;
}
void displayAnother(int a){
    cout<< "\nValue of a inside Display fincton:" << a ;
}
void Area(int radius){
    float area=PI * radius * radius;
    cout<<"Area is :"<<area;
}
int main(){
    display();
    cout<<"\nValue of a outside function:"<<a;
    displayAnother(30);
    Area(12);
}