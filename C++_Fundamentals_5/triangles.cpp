#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& vec);
int triangles(vector<int>& vec);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<int> vec(size);
    initVector(vec);
    cout << "Triangles count: " << triangles(vec) << endl;

    return 0;
}

void initVector(vector<int>& arr) {
    vector<int>::iterator it = arr.begin();
    for(; it < arr.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

int triangles(vector<int>& vec) {
    int count = 0;
    for(vector<int>::iterator it = vec.begin(); it < vec.end(); it++) {
        for(vector<int>::iterator it_1 = it + 1; it_1 < vec.end(); it_1++) {
            for(vector<int>::iterator it_2 = it_1 + 1; it_2 < vec.end(); it_2++) {
                cout << "Pairs: " << '(' << *it << ',' << *it_1 << ',' << *it_2 << ')' << endl;
                if(*it + *it_1 > *it_2 
                    && *it + *it_2  > *it_1 
                    && *it_1 + *it_2  > *it) count++;
            }
        }
    }
    return count;
}


