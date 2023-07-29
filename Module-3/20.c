#include<stdio.h>

int main() {
    for(int i=5, k=0; i>=0; i--, k++){
        for(int j=0; j<i; j++){
            printf(" ");
        }

        for(int j=0; j<k; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}