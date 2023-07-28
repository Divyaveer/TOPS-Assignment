#include<stdio.h>

int main() {
    int num, factorial=1;

    printf("Enter the Number : ");
    scanf("%d", &num);

    for(int orignalNum = num;orignalNum != 0; orignalNum--){
        factorial *= orignalNum;
    }

    printf("\nFactorial of %d = %d\n", num, factorial);
    
    return 0;
}