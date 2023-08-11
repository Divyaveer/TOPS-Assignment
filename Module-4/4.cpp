#include<iostream>
using namespace std;

class calculator{
    public:
        int n1, n2;

        void add(){
            cout<<"\nAddition of "<<n1<<" and "<<n2<<" = "<<n1+n2<<endl;
        }

        void subtract(){
            cout<<"\nAddition of "<<n1<<" and "<<n2<<" = "<<n1-n2<<endl;
        }

        void multiply(){
            cout<<"\nAddition of "<<n1<<" and "<<n2<<" = "<<n1*n2<<endl;
        }

        void divide(){
            cout<<"\nAddition of "<<n1<<" and "<<n2<<" = "<<n1/n2<<endl;
        }
};

int main() {
    class calculator num;
    int choice;
    char conti = 'y';

    while(conti == 'y'){
        cout<<"Enter the Two Number on which you want to perform operations : ";
        cin>>num.n1>>num.n2;

        cout<<endl<<"Which operation you want to perform on the numbers : \n\tPress:---\n\t\t1. Addition\n\t\t2. Subtraction\n\t\t3. Multiplication\n\t\t4. Divition\n\t\t\tEnter your chocie : ";
        cin>>choice;

        if(choice == 1){
            num.add();
        }else if(choice == 2){
            num.subtract();
        }else if(choice == 3){
            num.multiply();
        }else if(choice == 4){
            num.divide();
        }else{
            continue;
        }

        cout<<"Do you want to Continue (Press y for Continue) : ";
        cin>>conti;
    }
    
    return 0;
}