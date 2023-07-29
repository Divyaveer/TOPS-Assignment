#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    char conti='y';

    while(conti == 'y'){
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        if(num < 0){
            printf("\nInvalid Input!!!!....Please Provide Positive Integer.......\n");
            continue; 
        }else{
            int result = factorial(num);
            printf("\nFactorial of %d is %d\n", num, result);
        }

        printf("Do you want to continue(Press y for Continue) : ");
        scanf(" %c", &conti);
    }

    return 0;
}