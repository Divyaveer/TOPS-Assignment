#include<stdio.h>

int main() {
    for(int i=0, k=65; i<5; i++){
        for(int j=0; j<i; j++, k++){
            printf("%c", k);
        }
        printf("\n");
    }
    
    return 0;
}