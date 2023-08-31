#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <bits/stdc++.h>
#include "Professor.h" 
using namespace std;
class Department {
private:
    string departmentName;
    vector<string> courseCodes;
    vector<Professor*> professors; // Use pointers to Professor objects

public:
    Department(string name);
    ~Department();

    void addCourseCode(string code);
    void addProfessor(Professor* professor);

    // Getters for attributes
    string getDepartmentName();
    vector<string> getCourseCodes();
    vector<Professor*> getProfessors();
};

#endif
