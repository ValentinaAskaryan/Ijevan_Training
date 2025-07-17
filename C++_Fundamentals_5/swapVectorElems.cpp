#include <iostream>
#include <vector>
using namespace std;

// Functions declerations.
void checkVectorSizeValidity(int size);
void initVector(vector<int>& vec);
void swapVectorElems(vector<int>& vec, vector<int> intervals);
void printVector(const vector<int> vec);

int main() {
    int size, interSize;

    cout << "Enter the vector size: ";
    cin >> size;
    checkVectorSizeValidity(size);
    vector<int> vec(size);
    initVector(vec);

    cout << "Enter the intervals size: ";
    cin >> interSize;
    checkVectorSizeValidity(interSize);
    vector<int> intervals(interSize);
    initVector(intervals);

    swapVectorElems(vec, intervals);
    printVector(vec);
    return 0;
}

// Checks if vector size is valid, if no it exits the code.
void checkVectorSizeValidity(int size) {
    if(size < 1) {
        cerr << "The vector size must be at least 1." << endl;
        exit(1);
    }
}

// Initializes vector with user input.
void initVector(vector<int>& vec) {
    vector<int>::iterator it = vec.begin();
    for(; it != vec.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}

// Swaps the original vectors elems with the given intervals from the
// second vector.
void swapVectorElems(vector<int>& vec, vector<int> intervals) {
    vector<int>::iterator it = intervals.begin();
    for(; it < intervals.end(); it += 2) {
        int leftInd = *it;
        int rightInd = *(it + 1);
        if(leftInd >= 0 && rightInd < vec.size() && leftInd < rightInd) {
            while(leftInd < rightInd) {
                int temp = vec[leftInd];
                vec[leftInd] = vec[rightInd];
                vec[rightInd] = temp;
                leftInd++;
                rightInd--;
            }
        } else cerr << "Invalid interval!" << endl;
    }
}

// Prints the vectors elements.
void printVector(const vector<int> vec) {
    for(int v : vec) {
        cout << v << ' ';
    }
}
