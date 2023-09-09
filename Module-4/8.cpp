#include<iostream>
using namespace std;

class cricketer {
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

class batsman : public cricketer {
    public:
        string performance;
        int truns, not_out, matches, avarage;

        void input() {
            cout<<"Mr. "<<name<<", please enter the total matches you havve played : ";
            cin>>matches;

            cout<<"How many runs you have made in "<<matches<<" matches? : ";
            cin>>truns;

            cout<<"Enter the number of not outs in "<<matches<<" matches : ";
            cin>>not_out;
        }

        void averageRuns() {
            avarage = truns / (matches - not_out);

            if(avarage < 10){
                performance = "Too Bad";
            }else if(avarage >= 25 && avarage < 50){
                performance = "Good";
            }else if(avarage >=50 && avarage <= 100){
                performance = "Very Good";
            }else if(avarage > 100){
                performance = "Excellent";
            }
        }

        void displayData() {
            cout<<"\n\n\t\tMr. "<<name<<", your total runs in "<<matches<<" matches = "<<truns<<" and average runs = "<<avarage<<" last but not the least you performance = "<<performance<<endl<<endl;
        }
};

int main() {
    class batsman member;

    member.basicInfo();
    member.input();
    member.averageRuns();
    member.displayData();
    
    return 0;
}