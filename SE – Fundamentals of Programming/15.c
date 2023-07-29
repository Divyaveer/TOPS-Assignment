#include<stdio.h>

int main() {
    int num, max, temp, orignalNum;

    printf("Enter any Number : ");
    scanf("%d", &num);

    max = num % 10;
    orignalNum = num;

    while(orignalNum != 0){
        temp = orignalNum % 10;
        if(temp > max){
            max = temp;
        }
        orignalNum /= 10;
    }

    printf("\nHightest Digit in the number %d = %d\n", num, max);
    
    return 0;
}