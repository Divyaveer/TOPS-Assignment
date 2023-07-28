#include<stdio.h>

void monSatur(){
    int choice;
    char days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("what do you want to print:--\n\tPress:---\n\t\t1. Monday\n\t\t2. Tuesday\n\t\t3. Wednesday\n\t\t4. Thursday\n\t\t5. Friday\n\t\t6. Saturday\n\t\t7. Sunday\n\t\t\tEnter you choice : ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("\nDay is %s\n", days[choice-1]);
            break;
        case 2:
            printf("\nDay is %s\n", days[choice-1]);
            break;
        case 3:
            printf("\nDay is %s\n", days[choice-1]);
            break;
        case 4:
            printf("\nDay is %s\n", days[choice-1]);
            break;
        case 5:
            printf("\nDay is %s\n", days[choice-1]);
            break;
        case 6:
            printf("\nDay is %s\n", days[choice-1]);
            break;
        case 7:
            printf("\nDay is %s\n", days[choice-1]);
            break;
        default:
            printf("\n\n\t\tThere is no Day like that....\n\n");
            break;
    }
}

void voCons(){
    char character;

    printf("Enter any Character : ");
    scanf("%c", &character);

    switch(character){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c is a Vowel\n", character);
            break;
        default:
            printf("\n%c is a Consonant\n", character);
    }
}

int main() {
    int choice;
    char conti;

    do{
        printf("what do you want to print:---\n\tPress:--\n\t\t1. Monday to Saturday\n\t\t2. Vowel Or Consonant\n\t\t\tEnter you choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                monSatur();
                break;
            case 2:
                voCons();
                break;
            default:
                printf("\n\n\t\tWrong INput!!!!.....\n\n");
                continue;
                break;
        }
    }while(conti == 'y');
    
    return 0;
}