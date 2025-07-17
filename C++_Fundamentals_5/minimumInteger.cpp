#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void initVector(vector<int>& vec);
int minimumInteger(vector<int>& vec, int n);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<int> vec(size);
    initVector(vec);
    cout << "Min: " << minimumInteger(vec, size) << endl;
    return 0;
}

void initVector(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    for(; it < vec.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

int sum(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    int sum = 0;
    for(; it < vec.end(); it++) {
        sum += *it;
    }
    return sum;
}

int minimumInteger(vector<int>& vec, int n) {
    vector<int>::iterator it = vec.begin();
    int s = sum(vec);
    int min = INT_MAX;

    for(; it < vec.end(); it++) {
        if(s <= *it * n && *it < min) min = *it;
    }
    return min;
}
