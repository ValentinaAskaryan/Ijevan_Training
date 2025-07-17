#include <iostream>
#include <string>
#include <vector>
using namespace std;

void initVector(vector<string>& arr);
void removeConsecutiveSame(vector<string>& arr);
void printVector(vector<string>& arr);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<string> arr(size);
    initVector(arr);
    removeConsecutiveSame(arr);
    printVector(arr);
    cout << "The array size is: " << arr.size() << endl;
    return 0;
}

void initVector(vector<string>& arr) {
    vector<string>::iterator it = arr.begin();
    for(; it != arr.end(); it++) {
        cout << "Enter a string: ";
        cin >> *it;
    }
}

void removeConsecutiveSame(vector<string>& arr) {
    vector<string>::iterator it;
    bool found;
    do {
        found = false;
        for(it = arr.begin(); it != arr.end() - 1;) {
            if(*it == *(it + 1)) {
                found = true;
                it = arr.erase(it);
                it = arr.erase(it);
            }
            else {
                it++;
            }
            if(arr.size() < 2) break;
        }

    } while(found);
}

void printVector(vector<string>& arr) {
    vector<string>::iterator it = arr.begin();
    for(string a : arr) {
        cout << a << ' ';
    }
}
