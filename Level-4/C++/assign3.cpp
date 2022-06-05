#include<iostream>
using namespace std;
string itemList[5][3];
string barCode;


void initializeitemData(){
    for (int i=0;i<5;i++){
        cout<<"Enter details of intem: "<<i+1<<endl;
        for (int j=0;j<3;j++){
            if (j==0){
               cout<<"Enter Barcode: ";
               cin>>itemList[i][j];
            }else if(j==1){
                cout<<"Enter Item Name: ";
                cin>>itemList[i][j];
            }else if(j==2){
                cout<<"Enter Item Prize: ";
                cin>>itemList[i][j];
            }
        }
    }
}
void displayItemData(){
     cout<<"\nbarcode\tname\tprize"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<itemList[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void searchItemByCode(){
    cout<<"Enter Barcode: ";
    cin>>barCode;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(itemList[i][j]==barCode){
                cout<<"\nbarcode\tname\tprize"<<endl;
                cout<<"\n"<<itemList[i][j]<<"\t"<<itemList[i][j+1]<<"\t"<<itemList[i][j+2];
            }
        }
    }
    
}
int main(){ 
    initializeitemData();
    displayItemData();
     searchItemByCode();
    return 0;
}