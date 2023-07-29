#include<stdio.h>

int main() {
    int num, temp, sum=0, orignalNum;

    printf("Enter any number : ");
    scanf("%d", &num);

    orignalNum = num;

    while(orignalNum != 0){
        temp = orignalNum % 10;
        sum += temp;
        orignalNum /= 10;
    }

    printf("\nSum of Digits of the number %d = %d\n", num, sum);
    
    return 0;
}