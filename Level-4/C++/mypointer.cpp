#include<iostream>
using namespace std;
int main(){
    int var1=10;
    char var2[10];
    cout<<"Address of var1 :"<<&var1<<endl;
    cout<<"Address of var2 :"<<&var2<<endl;

    int *ptr1;
    ptr1 = &var1;
    int var3 = *ptr1 +3;
    cout<<"Address of var1: "<<ptr1<<endl;
    cout<<"Address of var1: "<<*ptr1<<endl;

    cout<<"Address of var3: "<<&var3<<endl;
    int *ptr3;
    ptr3 = &var3;
    cout<<"Value of vvar3: "<<*ptr3<<endl;
    return 0;
}