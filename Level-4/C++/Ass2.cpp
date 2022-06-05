#include <iostream>
using namespace std;

int numbers[3];
 
 int getMiniumNumber(){
     for(int i=0;i<3;i++){
    if(i==0){
        cout<<"Enter first number :";
        cin>>numbers[i];
    }else if(i==1){
        cout<<"Enter second number :";
        cin>>numbers[i];
    }else if(i==2){
        cout<<"Enter third number :";
        cin>>numbers[i];
    }
}
     int minNumber=numbers[0];
    for(int i=0;i<3;i++){
        if(minNumber>numbers[i]){
            minNumber=numbers[i];
        }
    }
    return minNumber;
 }
 
int main(){
    int minNumber=getMiniumNumber();
     cout<<"The minium number is: "<<minNumber<<endl;
 
    return 0;
}