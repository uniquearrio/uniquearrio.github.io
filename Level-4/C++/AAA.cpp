#include<iostream>
using namespace std;
int main(){
int start,end;
cout<<"Enter start value: ";
cin>>start;
cout<<"Enter end value: ";
cin>>end;
while(start<end){
    
    if(start%5==0 && start%8==0 ){
            cout<<"Numbers divisible by 5 & 8:"<<start<<endl;
            
        }
         
        else if(start%5==0){
           cout<<"Numbers divisible by 5:"<<start<<endl;
            

        }
        
        else if(start%8==0){
           cout<<"Numbers divisible by 8:"<<start<<endl; 
           
        }
        
        else if(start%5!=0 && start%8!=0){
            cout<<"Numbers not divisible by 8 & 5:"<<start<<endl;
            
        }    
    start++;
    } 

    return 0;
}