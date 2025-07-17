#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& vec);
int count4Divisibles(vector<int>& arr);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<int> vec(size);
    initVector(vec);
    cout << "Count: " << count4Divisibles(vec) << endl;
    return 0;
}

void initVector(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    for(; it < vec.end(); it++) {
        cout << "Enter an element: " ;
        cin >> *it;
    }
}

int count4Divisibles(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    vector<int>::iterator it_1;
    int count = 0;
    for(; it < vec.end(); it++) {
        for(it_1 = it + 1; it_1 < vec.end(); it_1++) {
            cout << "Pair: " << '(' << *it << ',' << *it_1 << ')' << endl;
            if((*it + *it_1) % 4 == 0) count++;
        }
    }
    return count;
}
