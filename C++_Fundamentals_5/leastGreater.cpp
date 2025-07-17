#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void initVector(vector<int>& vec);
int findLeastGreatest(vector<int> vec, int position);
void replaceElems(vector<int>& vec);
void printVector(vector<int>& vec);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;
    
    vector<int> vec(size);
    initVector(vec);
    replaceElems(vec);
    printVector(vec);
    return 0;
}

void initVector(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    for(; it < vec.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

int findLeastGreatest(vector<int> vec, int position) {
    vector<int>::iterator it = vec.begin() + position + 1;
    int lGreater = INT_MAX;
    bool found = false;

    for(; it < vec.end(); it++) {
        cout << "Iterate: " << *it << endl;
        if(*it < lGreater && *it > vec[position]) {
            lGreater = *it; 
            found = true;
        }
    }
    return found ? lGreater : -1;
}

void replaceElems(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    int num, index;
    for(; it < vec.end(); it++) {
        index = it - vec.begin();
        num = findLeastGreatest(vec, index);
        *it = num;
    }
}

void printVector(vector<int>& vec) {
    for(int v : vec) {
        cout << v << ' ';
    }
}
