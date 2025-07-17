#include <iostream>
#include <cmath>
using namespace std;

// Initializes the matrix with using pointers arithmetics.
void initializeArray(int** matrix, int row, int col) {
    for(int r = 0; r < row; r++) {
        matrix[r] = new int[col];
    }

    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cout << "Enter value of " << '[' << r << ',' << c << "]: " ;
            cin >> matrix[r][c];
        }
    }
}

// Prints the array using pointers arithmetics.
void printArray(int** matrix, int row, int col) {
    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cout << matrix[r][c] << ' ';
        } 
        cout << endl;
    }
}

// Takes the row of matrix as input and returns the sum.
int sumOfRowElems(int* array, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

// Changes the main diagonal elems with the sum of each row.
void changeMainDiagonal(int** matrix, int row, int col) {
    for(int r = 0; r < min(row, col); r++) {
        int sum = sumOfRowElems(matrix[r], col);
        matrix[r][r] = sum;
    }
}

// Free memory in RAM.
void freeMemory(int** matrix, int row, int col) {
    for(int r = 0; r < row; r++) {
        delete[] matrix[r];
    }
    delete[] matrix;
    matrix = nullptr;
}

int main() {
    int row, col;

    cout << "Enter array rows count: ";
    cin >> row;
    cout << "Enter array columns count: ";
    cin >> col;

    int** matrix = new int*[row];
    initializeArray(matrix, row, col);
    changeMainDiagonal(matrix, row, col);
    printArray(matrix, row, col);
    freeMemory(matrix, row, col);

    return 0;
}
