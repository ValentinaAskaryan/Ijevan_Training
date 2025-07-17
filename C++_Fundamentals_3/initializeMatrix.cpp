#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Functions declarations.
void initArray(int** ppMatrix, int row, int col);
void printArray(int** ppMatrix, int row, int col);
void freeMemory(int** ppMatrix, int row);

int main() {
    int row, col;

    cout << "Enter the matrix row: ";
    cin >> row;
    cout << "Enter the matrix col: ";
    cin >> col;

    int** ppMatrix = new int*[col];

    initArray(ppMatrix, row, col);
    printArray(ppMatrix, row, col);
    return 0;
}

// Initializes the matrix using random numbers from range [1; 100].
void initArray(int** ppMatrix, int row, int col) {
    srand(time(0));

    for(int r = 0; r < row; r++) {
        ppMatrix[r] = new int[col];
    }

    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            ppMatrix[r][c] = rand() % 100;
        }
    }
}

// Prints the array using pointer arithmetics.
void printArray(int** ppMatrix, int row, int col) {
    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cout << ppMatrix[r][c];
        }
        cout << endl;
    }
}

// Free data from RAM.
void freeMemory(int** ppMatrix, int row) {
    for(int r = 0; r < row; r++) {
        delete ppMatrix[r];
    }
    delete[] ppMatrix;
}
