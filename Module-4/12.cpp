#include <iostream>
using namespace std;

class Matrix {
    private:
        int size;
        int* data;

    public:
        Matrix(int n) : size(n) {
            data = new int[size];
        }

        Matrix operator+(const Matrix& other) {
            if (size != other.size) {
                throw runtime_error("Matrix sizes are not compatible for addition");
            }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
        }

        ~Matrix() {
            delete[] data;
        }

        void fillMatrix() {
            cout << "Enter " << size << " elements: ";
            for (int i = 0; i < size; ++i) {
                cin >> data[i];
            }
        }

        void displayMatrix() {
            for (int i = 0; i < size; ++i) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    int matrixSize;
    cout << "Enter the size of matrices: ";
    cin >> matrixSize;

    Matrix matrix1(matrixSize);
    Matrix matrix2(matrixSize);

    cout << "Enter elements for the first matrix:\n";
    matrix1.fillMatrix();

    cout << "Enter elements for the second matrix:\n";
    matrix2.fillMatrix();

    Matrix result = matrix1 + matrix2;

    cout << "Matrix 1: ";
    matrix1.displayMatrix();

    cout << "Matrix 2: ";
    matrix2.displayMatrix();

    cout << "Matrix Sum: ";
    result.displayMatrix();

    return 0;
}