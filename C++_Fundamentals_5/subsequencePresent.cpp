#include <iostream>
#include <vector>
using namespace std;


void initVector(vector<int>& vec);
bool subsequencePresent(vector<int> vec);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<int> vec(size);
    initVector(vec);
    cout << subsequencePresent(vec) << endl;
    return 0;
}

void initVector(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();

    for(; it < vec.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

bool subsequencePresent(vector<int> vec) {
    vector<int>::iterator it = vec.begin();
    for(; it < vec.end(); it++) {
        for(it += 1; it < vec.end(); it++) {
            if()
        }
    }
}
