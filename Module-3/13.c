#include<stdio.h>

int fibonacci(int i){
    if(i == 0){
        return 0;
    }
    if(i == 1){
        return 1;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}

int main() {
    int limit;

    printf("Enter the Limit of Fibonacci Series : ");
    scanf("%d", &limit);

    printf("\nFibonacci Series upto %d :---\n", limit);

    for(int i=0; i<limit; i++){
        printf("\t%d\n", fibonacci(i));
    }
    
    return 0;
}