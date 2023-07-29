#include<stdio.h>

int main() {
    int choice, n1, n2, result;
    char conti;

    do{
        printf("Enter Two numbers on which you want to perform operations : ");
        scanf("%d %d", &n1, &n2);

        printf("which operation you want to perform on the number :--\n\tPress:--\n\t\t1. Addition\n\t\t2. Subtraction\n\t\t3. Multiplication\n\t\t4. Division\n\t\t5. Modulo\n\t\t\tEnter your choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                result = n1 + n2;
                printf("Addition of %d and %d = %d\n", n1, n2, result);
                break;
            case 2:
                result = n1 - n2;
                printf("Subtraction of %d and %d = %d\n", n1, n2, result);
                break;
            case 3:
                result = n1 * n2;
                printf("Multiplication of %d and %d = %d\n", n1, n2, result);
                break;
            case 4:
                result = n1 / n2;
                printf("Division of %d and %d = %d\n", n1, n2, result);
                break;
            case 5:
                result = n1 % n2;
                printf("Modulo of %d and %d = %d\n", n1, n2, result);
                break;
            default:
                printf("\n\n\t\tWrong Inout!!!!.....\n\n");
                continue;
                break;
        }

        printf("Do you want to Continue(press y for continue) : ");
        scanf("%c", &conti);
    }while(conti == 'y');
    
    return 0;
}