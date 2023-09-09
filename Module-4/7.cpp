#include<iostream>
using namespace std;

class operators {
    public:
        int result;
        operators(int n1,int n2, int choice);
};

operators :: operators (int n1,int n2,int choice){
    if(choice == 1) {
        result = n1 + n2;
    }else if(choice == 2) {
        result = n1 - n2;
    }else if(choice == 3) {
        result = n1 * n2;
    }else if(choice == 4) {
        result = n1 / n2;
    }else {
        cout<<"\n\n\t\tWrong Input!!!!!......\n\n";
    }
}

int main() {
    int choice, n1, n2;
    string conti = "y";
    
    while(conti == "y") {
        cout<<"Which operation do you want to perform :---\n\tPress:---\n\t\t1. Addition\n\t\t2. Subtraction\n\t\t3. Multiplication\n\t\t4. Divition\n\t\t\tEnter your choice : ";
        cin>>choice;

        cout<<"Enter the Two numbers : ";
        cin>>n1>>n2;

        class operators number(n1, n2, choice);

        if(choice == 1){
            cout<<"Addition of "<<n1<<" and "<<n2<<" = "<<number.result<<endl;
        }else if(choice == 2){
            cout<<"Subtraction of "<<n1<<" and "<<n2<<" = "<<number.result<<endl;
        }else if(choice == 3){
            cout<<"Multiplication of "<<n1<<" and "<<n2<<" = "<<number.result<<endl;
        }else if(choice == 4){
            cout<<"Divition of "<<n1<<" and "<<n2<<" = "<<number.result<<endl;
        }

        cout<<"Do you want to continue (Press y for continue) : ";
        cin>>conti;
    }

    return 0;
}