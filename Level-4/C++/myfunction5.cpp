#include<iostream>
using namespace std;

    void checkLogin(){
        string email;
        string password;
        int num;
        input:cout<<"Enter Email; ";
        cin>>email;
        cout<<"Enter password: ";
        cin>>password;
        if(email=="admin@gmail.com" && password=="password"){
            cout<<"Login Success ! ";
        }else{
            cout<<"Login error!\n If you want to try again, please enter '1' : ";
            cin>>num;
            if(num==1){
                goto input;
            }
        }
    }
    int main(){
        checkLogin();

    return 0;
}