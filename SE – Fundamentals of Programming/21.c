#include<stdio.h>

int main() {
    for(int i=4, k=0; i>=0; i--, k++){
        for(int j=0; j<5; j++){
            printf(" ");
        }

        for(int j=0; j<k; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=5; i>=0; i--){
        for(int j=0; j<5; j++){
            printf(" ");
        }

        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}