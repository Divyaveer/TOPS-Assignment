#include<iostream>
using namespace std;

class calculator {
    public:
        void operation(int n1,int n2) {
            cout<<"Addition of "<<n1<<" and "<<n2<<" = "<<n1+n2<<endl;
        }

        void operation(int n1, int n2, string opera) {
            if(opera == "-"){
                cout<<"Subtraction of "<<n1<<" and "<<n2<<" = "<<n1-n2<<endl;
            }else if(opera == "*"){
                cout<<"Multiplication of "<<n1<<" and "<<n2<<" = "<<n1*n2<<endl;
            }else if(opera == "/"){
                cout<<"Divition of "<<n1<<" and "<<n2<<" = "<<n1/n2<<endl;
            }
        }
};

int main() {
    class calculator operators;

    int n1, n2;
    string choice;
    string conti="y";

    while(conti == "y"){
        cout<<"Which operation you want to perform : ---\n\tPress:----\n\t\t'+' Addition\n\t\t'-' Subtraction\n\t\t'*' Multiplication\n\t\t'/' Divition\n\t\t\tEnter your choice : ";
        cin>>choice;

        cout<<"Enter the Two number on which you are going to perform operations in it : ";
        cin>>n1>>n2;

        if(choice == "+"){
            operators.operation(n1, n2);
        }else if(choice == "-" || choice == "*" || choice == "/"){
            operators.operation(n1, n2, choice);
        }else{
            cout<<"\n\n\t\tWrong Input!!! Try again......\n\n";
            continue;
        }

        cout<<"\nDo you want to continue (Press y for continue) : ";
        cin>>conti; 
    }

    return 0;
}