#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrix(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrix(int rows1, int cols1, int rows2, int cols2, int matrix1[][cols1], int matrix2[][cols2], int result[][cols2]) {
    if (cols1 != rows2) {
        printf("Cannot multiply the matrices. Invalid dimensions.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 <= 0 || cols1 <= 0 || rows2 <= 0 || cols2 <= 0) {
        printf("Invalid matrix dimensions. Please enter positive integers for rows and columns.\n");
        return 1;
    }

    if (cols1 != rows2) {
        printf("Cannot multiply the matrices. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int resultAdd[rows1][cols1];
    int resultSub[rows1][cols1];
    int resultMul[rows1][cols2];

    inputMatrix(rows1, cols1, matrix1);
    inputMatrix(rows2, cols2, matrix2);

    printf("Matrix 1:\n");
    printMatrix(rows1, cols1, matrix1);

    printf("Matrix 2:\n");
    printMatrix(rows2, cols2, matrix2);

    addMatrix(rows1, cols1, matrix1, matrix2, resultAdd);
    printf("Addition of the matrices:\n");
    printMatrix(rows1, cols1, resultAdd);

    subtractMatrix(rows1, cols1, matrix1, matrix2, resultSub);
    printf("Subtraction of the matrices:\n");
    printMatrix(rows1, cols1, resultSub);

    multiplyMatrix(rows1, cols1, rows2, cols2, matrix1, matrix2, resultMul);
    printf("Multiplication of the matrices:\n");
    printMatrix(rows1, cols2, resultMul);

    return 0;
}
