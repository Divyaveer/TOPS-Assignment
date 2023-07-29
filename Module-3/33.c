#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    int age;
    char address[50];
    int salary;
};

struct Employee employees[MAX_EMPLOYEES];

int numEmployees = 0;

void addEmployee() {
    char again;

    if (numEmployees >= MAX_EMPLOYEES) {
        printf("\n\tSorry, no more rooms for NEW employee.\n");
        return;
    }

    printf("Enter the employee id: ");
    scanf("%d", &employees[numEmployees].id);
    printf("Enter the employee name: ");
    scanf("%s", employees[numEmployees].name);
    printf("Enter the employee age: ");
    scanf("%d", &employees[numEmployees].age);
    printf("Enter the employee address: ");
    scanf("%s", &employees[numEmployees].address);
    printf("Enter the employee Salary: ");
    scanf("%d", &employees[numEmployees].salary);

    numEmployees++;

    printf("\n\tEmployee added successfully.\n");

    ask:
    printf("\tDo you want to add more Employees (type y for yes and n for no): ");
    scanf(" %c", &again);

    if(again == 'y')
        addEmployee();
    else if(again == 'n')
        return;
    else{
        printf("\n\n\t\tWrong Input!! Try again.....\n\n");
        goto ask;
    }
}

void showAllEmployees() {
    if (numEmployees == 0) {
        printf("\n\tNo employees added yet.\n");
        return;
    }

    printf("List of employees:\n");
    printf("\tID\tName\tAge\taddress\tSalary\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("\t%d\t%s\t%d\t%s\t%d\n", employees[i].id, employees[i].name, employees[i].age, employees[i].address, employees[i].salary);
    }
}

void showEmployeeByID() {
    char again;
    again:
    if (numEmployees == 0) {
        printf("\n\tNo employees added yet.\n");
        return;
    }

    int idToFind;
    printf("Enter the employee ID to find: ");
    scanf("%d", &idToFind);

    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].id == idToFind) {
            printf("Employee found:\n");
            printf("\tID\tName\tAge\taddress\tSalary\n");
            printf("\t%d\t%s\t%d\t%s\t%d\n", employees[i].id, employees[i].name, employees[i].age, employees[i].address, employees[i].salary);
            return;
        }
    }

    printf("\n\tNo employee found with ID %d.\n", idToFind);
    printf("Do you want to find more Employees (type y for yes and n for no): ");
    scanf("%c", &again);

    if(again == 'y')
        goto again;
    else if(again == 'n')
        return;
    else{
        printf("\n\n\t\tWrong Input!!! Try Again......\n\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nPick one of the Options:---\n");
        printf("\t1. Add employee\n");
        printf("\t2. Show all employees\n");
        printf("\t3. Show employee by ID\n");
        printf("\t4. Exit\n");
        printf("\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                showAllEmployees();
                break;
            case 3:
                showEmployeeByID();
                break;
            case 4:
                printf("\n\nExiting program.\n\n");
                exit(0);
                break;
            default:
                printf("\n\n\t\tInvalid choice. Please try again.\n\n");
                break;
        }
    }

    return 0;
}