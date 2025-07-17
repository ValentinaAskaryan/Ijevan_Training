#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& vec);
vector<int> arrangeVector(vector<int> vec);
void printVector(vector<int>& vec);

int main() {
    int size;
    cin >> size;

    vector<int> vec(size);
    initVector(vec);
    vector<int> newVec = arrangeVector(vec);
    printVector(newVec);
    return 0;
}

void initVector(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    for(; it != vec.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

vector<int> arrangeVector(vector<int> vec) {
    vector<int>::iterator it = vec.begin();
    for(; it < vec.begin() - 1; it++) {
        int index = it - vec.begin();
        if(index % 2 == 0 && *it > *(it + 1)) {
            swap(*it, *(it + 1));
        } else if(index % 2 != 0 && *it < *(it + 1)) {
            swap(*it, *(it + 1));
        }
    }
    return vec;
}

void printVector(vector<int>& vec) {
    for(int v : vec) {
        cout << v << ' ';
    } 
}
