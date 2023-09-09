#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString operator+(const MyString& other) const {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        MyString result(newStr);
        delete[] newStr;
        return result;
    }

    void display() {
        cout << str;
    }

    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString str1 = "Hello, ";
    MyString str2 = "world!";
    MyString result = str1 + str2;

    cout << "Concatenated string: "<<endl;
    result.display();
    
    return 0;
}