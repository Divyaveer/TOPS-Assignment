#include<stdio.h>

int main() {
    int num, first, last, sum, orignalNum, temp;

    printf("Enter any number : ");
    scanf("%d", &num);

    orignalNum = num;
    last = num % 10;

    while(orignalNum != 0){
        temp = orignalNum;
        orignalNum /= 10;

        if(orignalNum == 0){
            first = temp;
        }
    }

    sum = first + last;

    printf("\nSum of First and Last Digit of the number %d = %d\n", num, sum);
    
    return 0;
}