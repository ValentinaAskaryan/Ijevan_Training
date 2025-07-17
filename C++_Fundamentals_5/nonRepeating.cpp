#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& arr);
int findFirstNonRepeating(vector<int>& arr);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<int> arr(size);
    initVector(arr);
    cout << "First non repeating number is: " << findFirstNonRepeating(arr) << endl;
    return 0;
}

void initVector(vector<int>& arr) {
    vector<int>::iterator it = arr.begin();
    for(; it < arr.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

int findFirstNonRepeating(vector<int>& arr) {
    bool found;
    for(vector<int>::iterator it = arr.begin(); it < arr.end(); it++) {
        found = false;
        for(vector<int>::iterator it_1 = arr.begin(); it_1 < arr.end(); it_1++) {
            if(it != it_1 && *it == *it_1) {
                found = true; 
                break;
            }
        }
        if(!found) return *it;
    }
    return 0; 
}

