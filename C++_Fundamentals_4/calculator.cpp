#include <iostream>
using namespace std;

struct Calculator {
    // Member functions declarations.
    Calculator();
    double add(double num_1, double num_2,  bool bMemorize = false);
    double subtract(double num_1, double num_2,  bool bMemorize = false);
    double multiply(double num_1, double num_2,  bool bMemorize = false);
    double divide(double num_1, double num_2,  bool bMemorize = false);
    void printMemory();

    // Private member which only is accessable inside the struct.
    private:
        double memory = 0.0;
}; 

// Constructor definition.
Calculator::Calculator() {
    cout << "Calculator is ready!" << endl;
}

// Adds two numbers. If bMemorize is true then it remembers the result there.
double Calculator::add(double num_1, double num_2,  bool bMemorize) {
    double result = num_1 + num_2;
    if(bMemorize) memory = result;
    return result;
}

// Subtract two numbers. If bMemorize is true then it remembers the result there.
double Calculator::subtract(double num_1, double num_2,  bool bMemorize) {
    double result = num_1 - num_2;
    if(bMemorize) memory = result;
    return result;
}

// Multiply two numbers. If bMemorize is true then it remembers the result there.
double Calculator::multiply(double num_1, double num_2,  bool bMemorize) {
    double result = num_1 * num_2;
    if(bMemorize) memory = result;
    return result;
}

// Divide two numbers. If bMemorize is true then it remembers the result there.
double Calculator::divide(double num_1, double num_2,  bool bMemorize) {
    double result = num_1 / num_2;
    if(bMemorize) memory = result;
    return result;
}

// Shows the result of bMemorize: last remembered opearation result.
void Calculator::printMemory() {
    if(memory) cout << "Memory: " << memory << endl;
    else cout << "Memory is not used yet." << endl;
}

int main() {
    Calculator newCalc;
    cout << "Sum: " << newCalc.add(0.5, 1.0) << endl;
    cout << "Difference: " << newCalc.subtract(0.5, 1.0, true) << endl;
    cout << "Product: " << newCalc.multiply(0.5, 1.0) << endl;
    cout << "Quotient: " << newCalc.divide(0.5, 1.0) << endl;
    newCalc.printMemory();
    return 0;
}
