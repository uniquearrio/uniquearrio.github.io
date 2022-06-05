#include<iostream>
using namespace std;
int main(){
    //type casting
    //implicit:
    char x = 'L';
    //string z="Hello";
    int y=2;
    y=x;//implict char to int =>char=>int
    cout<<"Y is : "<< y <<endl;
    float h = y+1.2;
    cout<<"float h is :"<<h<<endl;
    int a=15;
    int b= 2;
    float c = (float)a/b;//explicit
    cout<<"float c is "<<c<<endl;

    return 0;
}