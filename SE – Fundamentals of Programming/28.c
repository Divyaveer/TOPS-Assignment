#include <stdio.h>

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int size, int ascending) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size1, size2, choice1, choice2;
    char conti = 'y';

    while(conti == 'y'){
        printf("How many Values you want to Add in Array 1 : ");
        scanf("%d", &size1);

        printf("How many Values you want to Add in Array 1 : ");
        scanf("%d", &size2);

        int array1[size1], array2[size2];

        printf("Enter elements for the first array:\n");
        inputArray(array1, size1);

        printf("\nEnter elements for the second array:\n");
        inputArray(array2, size2);

        printf("\nChoose the order of Sort for Array 1 by :----\n\tPress:---\n\t\t1. Ascending Order\n\t\t2. Descending Order\n\t\t\tEnter your choice : ");
        scanf("%d", &choice1);
        sort(array1, size1, choice1 == 1);

        printf("\nChoose the order of Sort for Array 2 by :----\n\tPress:---\n\t\t1. Ascending Order\n\t\t2. Descending Order\n\t\t\tEnter your choice : ");
        scanf("%d", &choice2);
        sort(array2, size2, choice2 == 1);

        printf("\nFirst array after sorting: ");
        printArray(array1, size1);

        printf("\nSecond array after sorting: ");
        printArray(array2, size2);

        printf("\nDo you want to Continue(Press y for Continue) : ");
        scanf(" %c", &conti);
    }

    return 0;
}