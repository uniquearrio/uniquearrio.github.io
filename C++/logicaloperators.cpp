#include<iostream>
using namespace std;
int main(){
bool result;
int a=5;
int b=6;
result = (a<10)||(b>20);
result = (a<10)&&(b>2);
cout <<"Result is:"<<result<<endl;
cout <<"Not of result is :"<<!result<<endl;
    return 0;
}