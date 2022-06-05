#include<iostream>
using namespace std;
void changeValue(int *ip){
    cout<<"Address in functon: "<<ip<<endl;
    *ip=*ip +20;
    cout<<"Vlaue inside function : "<<*ip<<end;


}
int main(){
    int num=10;
    cout<<"Address of num: "<<&num<<endl;
    cout<<"Before functon call : "<<num;
    changeValue(&num);
    cout<<"After function call: "<<num<<endl;

    return 0;
}