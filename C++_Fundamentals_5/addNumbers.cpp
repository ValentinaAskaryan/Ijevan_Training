#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& arr);
int changeArrToNum(vector<int> arr);

int main() {
    int size_1;
    cout << "Enter the first vector size: ";
    cin >> size_1;

    vector<int> num_1(size_1);
    initVector(num_1);

    int size_2;
    cout << "Enter the second vector size: ";
    cin >> size_2;

    vector<int> num_2(size_2);
    initVector(num_2);
    cout << "The sum is: " << changeArrToNum(num_1) + changeArrToNum(num_2) << endl;
    return 0;
}

void initVector(vector<int>& arr) {
    vector<int>::iterator it = arr.begin();
    for(; it < arr.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

int changeArrToNum(vector<int> arr) {
    vector<int>::iterator it = arr.begin();
    int num = 0;
    for(; it < arr.end(); it++) {
        num *= 10;
        num += *it;
    }
    return num;
}


