#include <iostream>
#include <vector>
using namespace std;

void initVector(vector<int>& vec);
vector<int> maxMeetings(int n, vector<int>& s, vector<int>& f);
void printVector(vector<int>& vec);

int main() {
    int size;
    cout << "Enter meetings count: ";
    cin >> size;

    vector<int> start(size);
    vector<int> finish(size);
    cout << "Init start vector: ";
    initVector(start);
    cout << "Init end vector: ";
    initVector(finish);
    vector<int> meets = maxMeetings(size, start, finish);
    printVector(meets);
    return 0;
}

void initVector(vector<int>& vec) {
    for(vector<int>::iterator it = vec.begin(); it < vec.end(); it++) {
        cout << "Enter an element: ";
        cin >> *it;
    }
}


vector<int> maxMeetings(int n, vector<int>& s, vector<int>& f) {
    int finish, index, count = 0;
    vector<int> meets;

    if(*s.begin() < *f.begin()) {
        cout << "Meeting" << endl;
        finish = *f.begin();
        count++;
        meets.push_back(1);
    } else finish = *f.begin();

    for(vector<int>::iterator it = s.begin() + 1; it < s.end(); it++) {
            index = it - s.begin();
            if(s[index] < f[index] && s[index] > finish) {
                count++;
                finish = f[index];
                cout << "Pair: " << '(' << s[index] << ',' << f[index] << ')' << endl;
                cout << "Finish: " << finish << endl;
                meets.push_back(index + 1);
            }
    }
    cout << count << endl;
    return meets;
}

void printVector(vector<int>& vec) {
    for(int v : vec) {
        cout << v << " ";
    }
}
