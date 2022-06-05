#include<iostream>
using namespace std;
class Employee{
    private:
        int salary;
        string name;
    public:
    Employee(){
    }
        Employee(int salary,string name){
            this->salary=salary;
            this->name=name;
        }
        int getSalary(){
            return this->salary;
        }
        void displayInfo(){
            cout<<"\nname: "<<name<<"\tSalary: "<<salary<<endl;
            
        }
        void salaryIncrease(int amount){
            this->salary +=amount;
        }
};
int main(){
    Employee emp[4];
    int salary;
    string name;
    for(int i=0;i<4;i++){
        cout<<"Enter Employee "<<i+1<<" Information"<<endl;
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter salary: ";
        cin>>salary;
        cin.ignore();
        emp[i]=Employee(salary,name);
    }
    //accept emp data from user
    //display info
    cout<<"\n___________Employee List Information____________"<<endl;
    for(int i=0;i<4;i++){
        emp[i].displayInfo();
    }
    //salary increase
    for(int i=0;i<4;i++){
        emp[i].salaryIncrease(30000);
    }

    //display info
    cout<<"\n___________Updated Employee List Information____________"<<endl;
    for(int i=0;i<4;i++){
        emp[i].displayInfo();
    }
    return 0;
}