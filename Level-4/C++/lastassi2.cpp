#include<iostream>
using namespace std;
string itemList[5][3];
string rno;


void initializeData(){
    for (int i=0;i<5;i++){
        cout<<"Enter Student Data: "<<i+1<<endl;
        for (int j=0;j<3;j++){
            if (j==0){
               cout<<"Enter rno: ";
               cin>>itemList[i][j];
            }else if(j==1){
                cout<<"Enter Name: ";
                cin>>itemList[i][j];
            }else if(j==2){
                cout<<"Enter Course: ";
                cin>>itemList[i][j];
            }
        }
    }
}
void displayData(){
     cout<<"\nrno\tname\tcourse"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<itemList[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void searchDataByrno(){
    cout<<"Enter rno: ";
    cin>>rno;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(itemList[i][j]==rno){
                cout<<"\nrno\tname\tcourse"<<endl;
                cout<<"\n"<<itemList[i][j]<<"\t"<<itemList[i][j+1]<<"\t"<<itemList[i][j+2];
            }
        }
    }
    
}
int main(){ 
    initializeData();
    displayData();
     searchDataByrno();
    return 0;
}