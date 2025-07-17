#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& arr);
int findMagicNumber(vector<int>& arr);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<int> arr(size);
    initVector(arr);
    cout << "Magic number is: " << findMagicNumber(arr) << endl;
    return 0;
}

void initVector(vector<int>& arr) {
    vector<int>::iterator it = arr.begin();
    for(; it < arr.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

int findMagicNumber(vector<int>& arr) {
    vector<int>::iterator it = arr.begin();
    int index;
    for(; it < arr.end(); it++) {
        index = it - arr.begin();
        if(index == arr[index]) return arr[index];
    }
    return -1;
}

