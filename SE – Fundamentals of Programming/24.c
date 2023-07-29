#include<stdio.h>

int maxNum(int num[]){
    int max=num[0];

    for(int i=0; i<5; i++){
        if(num[i] > max){
            max = num[i];
        }
    }

    return max;
}

int main() {
    int num[5], max;

    for(int i=0; i<5; i++){
        printf("Enter the Number at position %d : ", i+1);
        scanf("%d", &num[i]);
    }

    max = maxNum(num);

    printf("\nMaximum Number in the array = %d\n", max);
    
    return 0;
}