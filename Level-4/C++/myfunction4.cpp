#include<iostream>
using namespace std;
string cities[3];
void intitializeData(){
    for(int i=0;i<3;i++){
        cout<<"Enter city name: ";
        getline(cin,cities[i]);
    }
}
void showData(){
    cout<<"______Your Cities_______"<<endl;
    for(int i=0;i<3;i++){
        cout<<cities[i]<<endl;
    }
}
int main(){
    intitializeData();
    showData();

    return 0;
}