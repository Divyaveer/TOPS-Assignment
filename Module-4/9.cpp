#include<iostream>
using namespace std;

class person {
    public:
        string name;
        int age;

        void basicInfo() {
            cout<<"Sir, Please Enter your name : ";
            cin>>name;

            cout<<"Mr. "<<name<<", how old are you : ";
            cin>>age;
        }
};

class student : public person {
    public:
        float percentage, m[3], total=0;

        void input() {
            for(int i=0; i<3; i++){
                cout<<"Enter the marks of Subject "<<i+1<<" : ";
                cin>>m[i];

                total += m[i];
            }

            percentage = (total / 300.0f) * 100.0f;
        }

        void displayData() {
            cout<<"\n\n\t\tMr. "<<name<<" you total in 3 subjects are = "<<total<<" and percentage = "<<percentage<<endl<<endl;
        }
};

class teacher : public person {
    public:
        float salary;

        void inputSalary(){
            cout<<"Mr. "<<name<<", please enter your salary : ";
            cin>>salary;
        }

        void displaySalary() {
            cout<<"Mr. "<<name<<" your Salary = "<<salary;
        }
};

int main() {
    class person human;
    class student stu;
    class teacher teach;

    int choice;
    string conti="y";

    while(conti == "y"){
        human.basicInfo();
        cout<<"Mr. "<<human.name<<" are a :--\n\tPress:---\n\t\t1. Student\n\t\t2. Teacher\n\t\t\tEnter your choice : ";
        cin>>choice;

        if(choice == 1){
            stu.input();
            stu.displayData();
        }else if(choice == 2){
            teach.inputSalary();
            teach.displaySalary();
        }else{
            cout<<"\n\n\t\tWrong Input!!! Try Again......\n\n";
            continue;
        }

        cout<<"\nDo you want to continue (Press y for continue) : ";
        cin>>conti;
    }
    
    return 0;
}