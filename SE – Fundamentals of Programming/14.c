#include<stdio.h>

int main() {
    int num, temp, rev=0, orignalNum;

    printf("Enter any Number : ");
    scanf("%d", &num);

    orignalNum = num;

    while(orignalNum != 0){
        temp = orignalNum % 10;
        rev = (rev + temp) * 10;
        orignalNum /= 10;
    }

    printf("\nReverse Number = %d\n", rev);
    
    return 0;
}