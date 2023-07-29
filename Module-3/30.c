#include<stdio.h>

int main() {
    int length;
    char string[20];

    printf("Enter any String : ");
    scanf("%s", &string);

    for(length = 1; string[length] != '\0'; length++);

    printf("\nLenght of the String %s = %d\n", string, length);
    
    return 0;
}