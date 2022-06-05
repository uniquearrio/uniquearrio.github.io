#include<iostream>
using namespace std;
class Animal{
    protected:
        string name;
        int leg;
    public:
        void setName(string name){
            this->name=name;
        }
        void setLeg(int leg){
            this->leg=leg;
        }
        string getName(){
            return this->name;
        }
        int getLeg(){
            return this->leg;
        }
        void eat(){
            cout<<"\nI can eat!"<<endl;
        }
        void sleep(){
            cout<<"\nI can sleep!"<<endl;
        }
};

class Bird:public Animal{
   private:
        int wings;
   public:
        void setWings(int wings){
            this->wings = wings;
        }
        int getWings(){
            return this->wings;
        }
        void initData(string name,int leg,int wings){
            this->wings = wings;
            this->name=name;
            this->leg = leg;
        }
        void fly(){
            cout<<"\nI can fly!"<<endl;
        }
};

class Elephant:public Animal{
    private:
        int tail;
    public:
        void setTail(int tail){
            this->tail=tail;
        }
        int getTail(){
            return this->tail;
        }
        void swim(){
            cout<<"\nI can swim!"<<endl;
        }
        void showInfo(){
            cout<<"\n\n_____Elephant Info _____\n\n";
            cout<<"Name: "<<getName() <<endl;
            cout<<"No of Legs: " << Animal::getLeg()<<endl;
            cout<<"No of Tail: "<<tail<<endl;
        }
};

int main(){
    Bird bird1 ;
    bird1.setName("ShweGae");
    bird1.setLeg(2);
    cout<<bird1.getName()<<" has " << bird1.getLeg() << " Legs !" <<endl ;
    bird1.eat();
    bird1.sleep();
    bird1.setWings(2);
    bird1.fly();
    Bird bird2;
    bird2.initData("NgweGae",2,2);
    cout<<bird2.getName()<< " has " << bird2.getLeg() << " legs and " <<bird2.getWings() << " wings !" <<endl;
    Elephant elephant1;
    elephant1.setName("MoMo");
    elephant1.setLeg(4);
    elephant1.setTail(1);
    elephant1.swim();
    elephant1.showInfo();
    cout<<elephant1.getName()<<" has " << elephant1.getLeg() << " legs !" <<endl;
   
   // elephant1.name="YoYO";
   
    return 0;
}