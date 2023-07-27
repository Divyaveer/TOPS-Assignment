#include<stdio.h>
#define pi 3.14

void areaCircle() {
    float r, a;

    printf("Enter the Radius of the Circle : ");
    scanf("%f", &r);

    a = pi * r * r;

    printf("\nArea of the Circle = %.2f\n", a);
}

void areaRectangle() {
    float l, b, a;

    printf("Enter the Lenght and Breadth of the Rectangle : ");
    scanf("%f %f", &l, &b);

    a = l * b;

    printf("\nArea of the Rectangle = %.2f\n", a);
}

void areaTriangle() {
    float b, h, a;

    printf("Enter the Base and Height of the Triangle : ");
    scanf("%f %f", &b, &h);

    a = (b * h) / 2;

    printf("\nArea of the Circle = %.2f\n", a);
}

int main() {
    int choice;
    char conti;

    do{
        printf("What do you want to find:--\n\tPress\n\t\t1. Area of Circle\n\t\t2. Area of Rectangle\n\t\t3. Area of Triangle\n\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                areaCircle();
                break;
            case 2:
                areaRectangle();
                break;
            case 3:
                areaTriangle();
                break;
            default:
                printf("\n\n\t\tWrong Input!!!!.....\n\n");
                continue;
                break;
        }

        printf("Do you want to continue(press y for continue): ");
        scanf(" %c", &conti);
    }while(conti == 'y');
    
    return 0;
}