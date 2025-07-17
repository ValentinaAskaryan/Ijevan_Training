#include <iostream>
#include <vector>
#include <string>
using namespace std;

class StudentProfile {
    public:
        const string sName;
        const int nStudentID;
        int nBirthYear;
        vector<int>& vecOfGrades;

        // Member functions declarations.
        StudentProfile(string name, int id, int birthYear, vector<int>& grades);
        void printProfile() const;
        double averageGrade() const;
};

// Definition of constructor.
StudentProfile::StudentProfile(string name, int id, int birthYear, vector<int>& grades):
    sName(name), 
    nStudentID(id), 
    nBirthYear(birthYear), 
    vecOfGrades(grades) 
{}

// Shows student data.
void StudentProfile::printProfile() const {
    cout << "Student name: " << sName << endl;
    cout << "Student ID: " << nStudentID << endl;
    cout << "Student birth year: " << nBirthYear << endl;
    cout << "Student grades: ";
    for(int g : vecOfGrades) cout << g << " ";
}

// Calculates and returns student average grade.
double StudentProfile::averageGrade() const {
    if (vecOfGrades.empty()) return 0.0;
    int sum = 0;
    for(int g : vecOfGrades) {
        sum += g;
    }
    return sum / vecOfGrades.size();
}


int main() {
    vector<int> grades = {18, 20, 19, 20, 13};
    StudentProfile student("Anna", 13, 1999, grades);
    student.printProfile();
    cout << "Average: " << student.averageGrade() << endl;

    return 0;
}
