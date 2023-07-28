#include<stdio.h>

int main() {
    int year;

    printf("Enter the Year : ");
    scanf("%d", &year);

    if(year % 100 == 0 && year % 400 == 0 || year % 4 == 0){
        printf("\nYear %d is a Leap Year.\n", year);
    }else{
        printf("\nYear %d is not a Leap Year.\n", year);
    }
    
    return 0;
}