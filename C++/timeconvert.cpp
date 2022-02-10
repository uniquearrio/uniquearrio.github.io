#include<iostream>
using namespace std;
int main(){
    //convert seconds to hours minutes seconds
    int mySeconds ;
    cout<<"Enter seconds to caculate: ";
    cin>>mySeconds;
    int hours= mySeconds/3600;//get hours
    int seconds=mySeconds%3600;//get seconds to caculate minutes and seconds
    int minutes = seconds/60;//get minutes
    seconds %= 60;//get seconds
    cout<<mySeconds<<"Seconds="<<hours<<"Hours:"<<minutes<<"Minutes:"<<seconds<<"Seconds:"<<endl;

    return 0;
}