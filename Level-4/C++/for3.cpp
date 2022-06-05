#include<iostream>
using namespace std;
int main(){
    int start,end,sum=0,count=0;
    float avarage;
    cout<<"enter start number";
    cin>>start;
    cout<<"enter end number";
    cin>>end;

    for(int i=start; i<=end ;i++){
        count++;
        sum+=i;
    }

    avarage=(float)sum/count;

    cout<<"sum of "<<start<<"to"<<end<<"is :"<<sum<<endl;
    cout<<"total count is "<<count<<endl;
    cout<<"average"<<avarage;


    return 0;
}