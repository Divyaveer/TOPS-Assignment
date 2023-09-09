#include<iostream>
using namespace std;

class students {
    public:
        string name;
        int age;

        void basicInfoInput() {
            cout<<"Sir, please enter your name : ";
            cin>>name;

            cout<<"Mr. "<<name<<" how old are you : ";
            cin>>age;
        }
};

class test : public students {
    public:
        int m[2];

        void inputMarks() {
            for(int i=0; i<2; i++){
                cout<<"Mr. "<<name<<", please Enter the marks of Subject "<<i+1<<" : "<<endl;
                cin>>m[i];
            }
        }
};

class result : public test {
    public:
        int total;

        void displayResult() {
            for(int i=0; i<2; i++){
                total += m[i];
            }

            cout<<"\nMr. "<<name<<" you total marks in 2 subjects = "<<total<<endl;
        }
};

int main() {
    class result report_card;
    
    int choice, stu;
    string conti="y";

    while(conti == "y"){
        report_card.basicInfoInput();
        report_card.inputMarks();
        report_card.displayResult();

        cout<<"\nDo you want to Continue (Press y for continue) : ";
        cin>>conti;
    }
    
    return 0;
}