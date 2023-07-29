#include<stdio.h>

struct test1
{
    char name[20];
    int age;
} test1;

union test2
{
    char name[20];
    int age;
} test2;


int main() {
    printf("Enter the Name for Structure : ");
    scanf("%s", &test1.name);

    printf("\nName of Structure : %s\n", test1.name);

    printf("Enter the Name for Union : ");
    scanf("%s", &test2.name);

    printf("\nName of Union : %s\n", test2.name);

    printf("Enter the Age for Structure : ");
    scanf("%d", &test1.age);

    printf("\nAge of Structure : %d\n", test1.age);
    
    printf("Enter the Age for Union : ");
    scanf("%d", &test2.age);

    printf("\nAge of Union : %d\n", test2.age);

    printf("\nBut Again Printing Name of Structure : %s\n", test1.name);
    printf("\nBut Again Printing Name of Union : %s\n", test2.name);
    
    return 0;
}