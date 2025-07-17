#include <iostream>
#include <climits>
using namespace std;

// Initializes the matrix using pointers arithmetics.
void initializeArray(int** matrix, int row, int col) {
    for(int r = 0; r < row; r++) {
        matrix[r] = new int[col];
    }
    
    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cout << "Enter value of " << '[' << r << ',' << c << "]: ";
            cin >> matrix[r][c];
        }
    }
}

// Takes the max value the smallest integer.
// Iterates through the elemets up from the main diagonal.
// Checks the max value and returns.
int findMaxNumber(int** matrix, int row, int col) {
    int maxVal =INT_MIN;
    for(int r = 0; r < row; r++) {
        for(int c = r + 1; c < col; c++) {
            if(matrix[r][c] > maxVal) maxVal = matrix[r][c];
        }
    }
    return maxVal;
}

// Free the memory.
void freeMemory(int** matrix, int row, int col) {
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

    int** matrix = new int*[row];
    initializeArray(matrix, row, col);
    cout << "The max number above the main diagonal is: " << findMaxNumber(matrix, row, col) << endl;
    freeMemory(matrix, row, col);

    return 0;
}
