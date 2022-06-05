#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    string nrcno;
public:
void initData(string name,string nrcno){
    this->name=name;
    this->nrcno=nrcno;
}
void showData(){
    cout<<"\nName"<<name<<endl;
    cout<<"NRC: "<<nrcno<<endl;
}
};
class Student: public Person{
private:
    int rno;
public:
    Student(){
    }
    Student(int rno,string name,string nrcno){
        this->rno=rno;
        initData(name,nrcno);
    }
    void showData(){
        Person::showData();
        cout<<"roll number: "<<rno<<endl;
    }
    void attend(){
        cout<<"\n hello i am attending z2p 7"<<endl;
    }
    

};
class Programmer:public Person{
    private:
    string skillSet;
    public:
    void setSkillSet(string skills){
        this->skillSet=skills;
    }
    void viewSkillSet(){
        cout<<"Hello.I am a Programmer and my skill is: "<<skillSet<<endl;
    }
};
int main(){
    Student student1;
    student1.initData("Mg Mg","12/ksn(N)187160");
    student1.showData();
    Student student2(1,"Aye Aye","10/kja(N)456123");
    student2.showData();
    student2.attend();

    Programmer programmer1;
    programmer1.initData("john","adksjf");
    programmer1.setSkillSet("C++");
    programmer1.viewSkillSet();
    programmer1.showData();
    return 0;
}