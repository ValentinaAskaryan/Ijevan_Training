#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& vec);
int studentCount(vector<int>& vec);
int sumOfVectorElements(vector<int>& vec);
bool possible(vector<int>& vec);

int main() {
    int size;
    cout << "Enter the vector size: ";
    cin >> size;

    vector<int> vec(size);
    initVector(vec);
    cout << boolalpha;
    cout << "Possible: " << possible(vec) << endl;
    return 0;
}

void initVector(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    for(vector<int>::iterator it = vec.begin(); it < vec.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}
int studentCount(vector<int>& vec) {
    int count = 0;
    for(int v : vec) {
        count++;
    }
    return count;
}

int sumOfVectorElements(vector<int>& vec) {
    int sum = 0;
    for(int v : vec) {
        sum += v;
    }
    return sum;
}

bool possible(vector<int>& vec) {
    int count = studentCount(vec);
    int vecSum = sumOfVectorElements(vec);
    int sum = vec.size() * (vec.size() + 1) / 2;

    return sum == vecSum;
}
