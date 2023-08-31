#include "Course.h"
using namespace std;
Course::Course(string code, string name, Professor* prof, Department& dept)
    : courseCode(code), courseName(name), professorTeaching(prof), courseDepartment(dept) {}

Course::~Course() {
    cout << "Course Destructor Called" << endl;
}

void Course::enrollStudent(Student* student) { 
    studentsEnrolled.push_back(student);
}

string Course::getCourseCode() {
    return courseCode;
}

string Course::getCourseName() {
    return courseName;
}

Professor* Course::getProfessorTeaching() {
    return professorTeaching;
}

Department Course::getCourseDepartment() {
    return courseDepartment;
}

vector<Student*> Course::getStudentsEnrolled() {
    return studentsEnrolled;
}
