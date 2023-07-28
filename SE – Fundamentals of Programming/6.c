#include<stdio.h>

void dayYear(){
    float days;

    printf("Enter the Days : ");
    scanf("%f", &days);

    printf("\nNumber of years = %.2f\n", days/365.0f);
}

void yearDay(){
    int years;

    printf("Enter the Years : ");
    scanf("%d", &years);

    printf("\nNumber of Days = %d\n", years*365);
}

int main() {
    int choice;
    char conti;

    do{
        printf("What do you want to find:--\n\tPress:--\n\t\t1. Days into year\n\t\t2. Years into Days\n\t\t\tEnter your Choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                dayYear();
                break;
            case 2:
                yearDay();
                break;
            default:
                printf("\n\n\t\tWrong Input!!!!....\n\n");
                continue;
                break;
        }

        printf("Do you want to Continue(Press y for Continue): ");
        scanf(" %c", &conti);
    }while(conti == 'y');
      
    return 0;
}