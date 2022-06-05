#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"if you entered 0 ,program will terminate!"<<endl;
    do{
        cout<<"entr a non zero number: ";
        cin>>num;
        if(num>0){
            cout<<num<<"is positive!";
        }else if (num<0){
            cout<<num<<"is Negative";
        }else{
            cout<<"terminating from program ...!"<<endl;
        }
    }while(num!=0);

    return 0;
}