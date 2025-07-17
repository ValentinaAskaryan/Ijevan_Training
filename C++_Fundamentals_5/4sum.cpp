#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& vec);
bool __4Sum(vector<int>& vec, int target);

int main() {
    int size, target;
    cout << "Enter the vector size: ";
    cin >> size;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> vec(size);
    initVector(vec);

    cout << boolalpha;
    cout << "4Sum : " << __4Sum(vec, target) << endl;
    return 0;
}

void initVector(vector<int>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << "Enter an element: " ;
        cin >> vec[i];
    }    
}

bool __4Sum(vector<int>& vec, int target) {
    for(int i = 0; i < vec.size(); i++) {
        for(int j = i + 1; j < vec.size(); j++) {
            for(int k = j + 1; k < vec.size(); k++) {
                for(int q = k + 1; q < vec.size(); q++) {
                    if(vec[i] + vec[j] + vec[k] + vec[q] == target) return true;
                }
            }
        }
    }
    return false;
}
