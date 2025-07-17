#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generates a random number in range of [1-100].
// Checks user input each time and gives hints: high or low.
// Counts each guess and prints the count when user guesses the 
// number.
int randomNumGuess(int randNum) {
    int num = 0, count = 0;
    while(num != randNum) {
        cout << "Input a number:";
        cin >> num;
        count++;
        if(num > randNum) cout << "Too high" << endl;
        else if(num < randNum) cout << "Too low" << endl;
    }
    cout << "The number is: " << num << endl;
    return count;
}

int main() {
    srand(time(0));  
    int randNum = rand() % 100 + 1;
    int count = randomNumGuess(randNum);
    cout << "The guesses count is: " << count << endl;

    return 0;
}
