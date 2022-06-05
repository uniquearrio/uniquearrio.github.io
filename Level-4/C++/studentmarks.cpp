#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter number of students: ";
    cin>>count;
    int student_mark[count][7];
    for (int i=0;i<count;i++){
        for (int j=0;j<4;j++){
            if (j==0){
                student_mark[i][j]=i+1;
            }else if(j==1){
                cout<<"Enter Programming Mark: ";
                cin>>student_mark[i][j];
            }else if(j==2){
                cout<<"Enter English Mark: ";
                cin>>student_mark[i][j];
            }else{
                cout<<"Enter Maths Mark: ";
                cin>>student_mark[i][j];
            }
        }
    }

    for(int i=0;i<count;i++){
        int programming=student_mark[i][1];
        int english=student_mark[i][2];
        int maths=student_mark[i][3];
        int total=(programming+english+maths);
        float average=total*1.0/3;
        int result=(programming>=50 && english>=50 && maths>=50);
        student_mark[i][4] = total;
        student_mark[i][5] = average;
        student_mark[i][6] =result;
    }
    
    //output
    cout<<"\nStudent Marks information for:"<<count<<"Students "<<endl;
    cout<<"\nID\tPro\tEng\tMaths\tTotal\tAvg\tresult"<<endl;
    for(int i=0;i<count;i++){
        for(int j=0;j<7;j++){
            if (j==6){
                if(student_mark[i][j]==1){
                    cout<<"Pass"<<"\t";
                }else{
                    cout<<"Fail\t";
                }
            }else{
            cout<<student_mark[i][j]<<"\t";
            }
        }
        cout<<endl;
    }

    return 0;
}