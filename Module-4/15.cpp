#include<iostream>
using namespace std;

class areaCalculation {
    public:
        const int pi=22/7;

        void area(int r) {
            cout<<"\nArea of the Circle = "<<pi*r*r<<endl;
        }

        void area(int l, int b, int choice){
            if(choice == 1){
                cout<<"\nArea of the Rectangle = "<<l*b<<endl;
            }else if(choice == 2){
                cout<<"\nArea of the Triangle = "<<(l*b)/2<<endl;
            }
        }
};

int main() {
    class areaCalculation calculator;
    
    int choice;
    string conti = "y";
    
    while(conti == "y"){
        cout<<"Of which shape you want to find its area :--\n\tPress:---\n\t\t1. Rectangle\n\t\t2. Triangle\n\t\t3. Circle\n\t\t\tEnter your choice : ";
        cin>>choice;

        if(choice == 3){
            int r;

            cout<<"Enter the radius of the circle : ";
            cin>>r;

            calculator.area(r);
        }else if(choice == 1 || choice == 2){
            int l, b;

            cout<<"Enter the length and the breadth : ";
            cin>>l>>b;

            calculator.area(l, b, choice);
        }
    }

    return 0;
}