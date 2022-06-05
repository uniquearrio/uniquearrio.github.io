#include<iostream>
using namespace std;
class Fruit
{
    public:
        string Name;
        int price;
        void setData(string na,int price){
            Name=na;
            this->price=price;
        }
        void showData(){
            cout<<"\nName: "<<Name;
            cout<<"\nPrice: "<<price<<endl;
        }
};
int main(){
    Fruit fruit1;
    Fruit fruit2;

    fruit1.setData("Mango",700);
    fruit1.showData();
    fruit1.Name="banana";
    fruit1.price=900;
    fruit1.showData();
    

    cout<<"\nData of Fruit 2: ";
    fruit2.showData();
    fruit2.Name="Papaya";
    fruit2.price=1000;
    fruit2.showData();
    return 0;
}