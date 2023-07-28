#include<stdio.h>

void print(){
    for(int i=972; i >= 897; i++){
        printf("%d\n", i);
    }
}

void input(){
    int num[10], even[10], odd[10], totalEv = 0, totalOdd = 0;

    for(int i=0; i<10; i++){
        printf("Enter the %d no. : ", i+1);
        scanf("%d", &num[i]);

        if(num[i] % 2 == 0){
            even[i] = num[i];
            totalEv += even[i];
        }else{
            odd[i] = num[i];
            totalOdd += odd[i];
        }
    }

    printf("\nTotal Even number :---\n");
    for(int i=0; i<10; i++){
        printf("%d\n", even[i]);
    }

    printf("\nTotal Odd Number :---\n");
    for(int i=0; i<10; i++){
        printf("%d\n", odd[i]);
    }

    printf("\nTotal of all Even Number = %d and Odd Number = %d\n", totalEv, totalOdd);
}

void table(){
    int num;

    printf("Enter the Number you want to print Table : ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        printf("%d X %d =  %d\n", num, i, num*i);
    }
}

int main() {
    int choice;
    char conti;

    do{
        printf("What do you want to print:---\n\tPress:---\n\t\t1. Print no. 972  to 897\n\t\t2. Input 10 no. how many are even and odd, sum of all even and odd\n\t\t3. Table of given number by keyboard\n\t\t\tEnter your choice : ");
        scanf("%d", choice);

        switch(choice){
            case 1:
                print();
                break;
            case 2:
                input();
                break;
            case 3:
                table();
                break;
            default:
                printf("\n\n\t\tWrong Input!!!>...\n\n");
                continue;
                break;
        }

        printf("\nDo you want to Continue(Press y for Continue) : ");
        scanf("%c", &conti);
    }while(conti == 'y');
    
    return 0;
}