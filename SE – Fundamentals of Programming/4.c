#include<stdio.h>

int main() {
    float p, r, t, si;
    char conti;

    do{
        printf("Enter the Principal Amount : ");
        scanf("%f", &p);

        printf("Enter the Rate of Interest : ");
        scanf("%f", &r);

        printf("Enter the Time Period : ");
        scanf("%f", &t);

        si = (p * r * t) / 100;

        printf("\nSimple Interest = %.2f\n", si);

        printf("Do you want to Continue(Press y for Continue): ");
        scanf(" %c", &conti);
    }while(conti == 'y');
    
    return 0;
}