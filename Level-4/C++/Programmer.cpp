#include<iostream>
using namespace std;
class Person{
    private:
        string name;
    public:
        void getData(){
            cout<<"Enter Name: ";
            getline(cin,name);
        }
        void display(){
        cout<"Name:"<<name<<endl;
    }
};
class Employee: public Person{
    private:
        string company;
        int salary;
    public:
        void getData(





















            
        )
};
class Programmer: public Employee{

};
int main(){
    Programmer programmer1;
    programmer1.getData();
    programmer1.display();

    return 0;
}