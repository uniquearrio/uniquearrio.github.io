#include<iostream>
using namespace std;
int main(){
    int count,i=1;
    cout<<"Enter how many odd number would you like to print? ";
    cin>>count;
    while(count>0){
        if(i%2){
            cout<<i<<endl;
            count--;
        }
        i++;
    }
    
    return 0;
}