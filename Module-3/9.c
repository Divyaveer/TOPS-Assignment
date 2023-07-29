#include<stdio.h>

int main() {
    int num;

    printf("Enter any Number : ");
    scanf("%d", &num);

    printf("\n%s\n", (num % 2 == 0)?"Number is Even":"Number is Odd");
    
    return 0;
}