#include<iostream>
using namespace std;
int main(){
    int i=1 , j=10;
    while((i<=5 || j>=1)){
        cout<<"i="<<i<<"\tj="<<j<<endl;
        i++;
        j--;
    }

    return 0;
}