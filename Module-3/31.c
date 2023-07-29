#include <stdio.h>
#include <string.h>

void reverse_string_recursion(char *str, int end) {
    static int start = 0;

    if (start >= end) {
        return;
    }else{
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        reverse_string_recursion(str, end - 1);
    }
}

int main() {
    char input_str[100], str[100];

    printf("Enter a string: ");
    scanf("%s", input_str);

    strcpy(str, input_str);

    int length = strlen(input_str);
    reverse_string_recursion(input_str, length - 1);

    if(strcmp(str, input_str) == 0)
        printf("\n%s is Palindrome\n", input_str);
    else
        printf("\n%s is not Palindrome\n", input_str);

    return 0;
}