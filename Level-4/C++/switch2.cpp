#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade!";
    cin>>grade;
    switch (grade)
    {
        case'A':cout<<"\nExcellent!";break;
        case'B':cout<<"\nCredit!";break;
        case'C':cout<<"\nWell Done!";break;
         case'D':cout<<"\nYou Passed!";break;
          case'E':cout<<"\nBetter Try Again!";break;
        default:cout<<"\nInvalid Grade!";break;
    }
    
cout<<"\nYour Grade is :"<<grade<<endl;
    return 0;
}