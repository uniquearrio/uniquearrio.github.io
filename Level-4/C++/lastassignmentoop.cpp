#include<iostream>
using namespace std;
class Product{
    private:
    string name;
    float price;
    int barCode;
    public:
        Product(){

        }
        void setName(string name){//setter 
            this->name=name;
        }
        string getName(){
            return this->name;
        }
        void setPrice(float price){
            this->price=price;
        }
        float getPrice(){
            return this->price;
        }
        void setBarCode(int code){
            if(code>=1000 && code<=9999){
                this->barCode=code;
            }else{
                cout<<"Invalid code: "<<code<<endl;
            }
        }
        int getBarCode(){
            return this->barCode;
        }
};
int main(){
    string productName;
    float productPrice;
    int productCode;

    Product product1,product2;
    product1.setName("JDonut");//using setter
    cout<<product1.getName()<<endl;
    product1.setPrice(950);
    cout<<product1.getPrice()<<endl;
    product1.setBarCode(1001);
    cout<<product1.getBarCode()<<endl;

    cout<<"Enter product name for product2: ";
    getline(cin,productName);
    //cin>>productName;
    cout<<"Enter product prize for product2: ";
    cin>>productPrice;
    cout<<"Enter product Barcode for product2: ";
    cin>>productCode;

    product2.setName(productName);
    product2.setPrice(productPrice);
    product2.setBarCode(productCode);
    cout<<product2.getName()<<"\t"<<product2.getPrice()<<"\t"<<product2.getBarCode()<<endl;
    
    Product product[5];
    for(int i=0;i<5;i++){
        
    }
    
    return 0;
}