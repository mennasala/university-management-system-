#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <bits/stdc++.h>
#include "Department.h" 
#include "Student.h" 
using namespace std;
class University {
private:
    string name;
    vector<Department*> departments;
    vector<Student*> students;

public:
    University(string name);
    ~University();

    void addDepartment(Department* department);
    void addStudent(Student* student);


    string getName();
    vector<Department*> getDepartments();
    vector<Student*> getStudents();
};

#endif
