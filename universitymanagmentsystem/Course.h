#ifndef COURSE_H
#define COURSE_H

#include <bits/stdc++.h>
#include "Professor.h" // Include the Professor class header
#include "Department.h" // Include the Department class header
#include "Student.h" // Include the Student class header
using namespace std;
class Course {
private:
    string courseCode;
    string courseName;
    Professor* professorTeaching;
    Department courseDepartment;
    vector<Student*> studentsEnrolled;

public:
    Course(string code, string name, Professor* prof, Department& dept);
    ~Course();

    void enrollStudent(Student* student);

    // Getters for attributes
    string getCourseCode();
    string getCourseName();
    Professor* getProfessorTeaching();
    Department getCourseDepartment();
    vector<Student*> getStudentsEnrolled();
};

#endif
