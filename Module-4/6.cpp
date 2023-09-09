#include<iostream>
using namespace std;

inline int cube(int n) {return n*n*n;}

inline int multi(int n1,int n2) {return n1*n2;}

int main() {
    int choice;
    string conti="y";

    while(conti == "y"){
        cout<<"Which operation do you want to perform :----\n\tPress:---\n\t\t1. Multiplication of two numbers\n\t\t2. Cube of a Number\n\t\t\tEnter your choice : ";
        cin>>choice;

        if(choice == 1){
            int n1, n2;

            cout<<"Enter the Two numbers : ";
            cin>>n1>>n2;

            cout<<"Multiplication of "<<n1<<" and "<<n2<<" = "<<multi(n1, n2)<<endl;
        }else if(choice == 2){
            int num;

            cout<<"Enter the Number : ";
            cin>>num;

            cout<<"Cube of "<<num<<" = "<<cube(num)<<endl;
        }else{
            cout<<"\n\n\t\tWrong Input Try Again............\n\n";
        }

        cout<<"\nDo you want to Continue (Press y for continue) : ";
        cin>>conti;
    }
    
    return 0;
}