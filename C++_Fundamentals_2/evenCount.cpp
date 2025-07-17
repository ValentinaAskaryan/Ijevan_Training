#include <iostream>
using namespace std;

// Initializes the given matrix using pointers arithmetics.
void initializeMatrix(int** matrix, int row, int col) {
    for(int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << "Enter value of [" << i << ',' << j << "]: "; 
            cin >> matrix[i][j];
        }
    }
}

// Counts the even numbers in the matrix.
int countEvenNumbers(int** matrix, int row, int col) {
    int count = 0;
    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            if(matrix[r][c] % 2 == 0) count++;
        }
    }
    return count;
}

int main() {
    int row, col;

    cout << "Enter row count: ";
    cin >> row;
    cout << "Enter column count: ";
    cin >> col;

    int** matrix = new int*[row];
    initializeMatrix(matrix, row, col);
    cout << "Even numbers count is: " << countEvenNumbers(matrix, row, col) << endl;

    return 0;
}
