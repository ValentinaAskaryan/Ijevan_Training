#include <iostream>
using namespace std;

// Initializes the matrix using pointers arithmetics.
void initializeMatrix(double** matrix, int row, int col) {
    for(int r = 0; r < row; r++) {
        matrix[r] = new double[col];
    }

    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cout << "Enter value of " << '[' << r << ',' << c << "]: ";
            cin >> matrix[r][c];
        }
    }
}

// Checks if the elements below the main diagonal are in the given range and counts it.
int countOfNumbersInRange(double** matrix, int row, int col) {
    int count = 0;
    for(int r = 0; r < row; r++) {
        for(int c = 0; c <= r; c++) {
            if(matrix[r][c] >= 12.3 && matrix[r][c] < 34.1) count++;
        }
    }
    return count;
}

// Free the memory in RAM.
void freeMemory(double** matrix, int row, int col) {
    for(int r = 0; r < row; r++) {
        delete[] matrix[r];
    }
    delete[] matrix;
}

int main() {
    int row, col;

    cout << "Enter the matrix row count: ";
    cin >> row;
    cout << "Enter the matrix col count: ";
    cin >> col;

    double** matrix = new double*[row];
    initializeMatrix(matrix, row, col);
    cout << "Count of elements in range is: " << countOfNumbersInRange(matrix, row, col) << endl;
    freeMemory(matrix, row, col);

    return 0;
}
