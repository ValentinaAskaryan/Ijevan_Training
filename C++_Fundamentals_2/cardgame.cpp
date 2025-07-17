#include <iostream>
using namespace std;

// Initializes array using pointer arithmetics.
void initializeArray(int* array, int size) {
    for(int* ptr = array; ptr < array + size; ptr++) {
        cout << "Enter card number: ";
        cin >> *ptr;
    }
}

// Calculates the total size that must be and the real size.
// Subrtucts total size and real size and gets the lost card.
int cardGame(int* array, int size) {
    int sum = 0;
    for(int* ptr = array; ptr < array + size; ptr++) {
        sum += *ptr;
    }
    return size * (size + 1) / 2 - sum;
}

int main() {
    int N;
    
    cout << "Enter cards count: ";
    cin >> N;

    int* array = new int[N - 1];
    initializeArray(array, N - 1);
    cout << "The lost card is: " << cardGame(array, N) << endl;

    delete[] array;
    return 0;
}
