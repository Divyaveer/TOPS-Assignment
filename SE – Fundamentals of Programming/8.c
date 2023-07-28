#include<stdio.h>

int main() {
    int n1, n2;

    printf("Enter Two Numbers : ");
    scanf("%d %d", &n1, &n2);

    printf("\nBefore Swaping, Value of n1 = %d and n2 = %d\n", n1, n2);

    n1 += n2;
    n2 = n1 - n2;
    n1 -= n2;

    printf("After Swaping, Value of n1 = %d and n2 = %d\n", n1, n2);

    return 0;
}