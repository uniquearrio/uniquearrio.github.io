#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Please enteer a character,'q' to exit the program! ";
    cin>>ch;
    do{
        cout<<"\nEnter a character: ";
        cin>>ch;
        if(ch>=0 && ch<=9){
            cout<<ch<<"is a digit! ";
        }else{
            cout<<ch<<"is not a digit!";
        
    }while(ch!='q');

    return 0;
}