#include<iostream>
#include<iomanip>
#include<cctype>
#include<cmath>
using namespace std;
int main(){
     cout<<"\n______Functons of cc type Library______\n";
     cout<<"is alpha('9') : "<<isalpha('9')<<endl;
      cout<<"is alpha('A') : "<<isalpha('A')<<endl;
        cout<<"is digit('9') : "<<isdigit('9')<<endl;
        cout<<(char)tolower('A')<<endl;

        cout<<"3 power 5 is "<<pow(3,5)<<endl; //base=3,power=5
cout<<"Square root of 36 is "<<sqrt(36)<<endl;
cout<<"Value of sin(30) is "<<sin(30)<<endl;
cout<<"Value of log(10) is "<<log(10)<<"\n\n";

cout<<"\n_______Functions of iomanip library____\n\n";
cout<<"Spring"<<setw(20)<<"Day"<<endl;
cout<<"Love"<<setw(27)<<"Yourself"<<endl;
    return 0;
} 