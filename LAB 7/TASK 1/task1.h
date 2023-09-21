#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <string>

using namespace std;

class StudentCollection {
private:
    string names[10];
    double grades[10];
    int numStudents;

public:
    StudentCollection() : numStudents(0) {}

    double& operator[](const string& name) {
        for (int i = 0; i < numStudents; ++i) {
            if (names[i] == name) {
                return grades[i];
            }
        }
        cout << "Student Not Found" << endl;
        exit(1);
    }

    void addStudent(const string& name, double grade) {
        if (numStudents < 10) {
            names[numStudents] = name;
            grades[numStudents++] = grade;
        }
        else {
            cout << "Student collection is full" << endl;
        }
    }
};

#endif