#include "University.h"

University::University(string name) : name(name) {}

University::~University() {
    cout << "University Destructor Called" << endl;
}

void University::addDepartment(Department* department) {
    departments.push_back(department);
}

void University::addStudent(Student* student) {
    students.push_back(student);
}

string University::getName() {
    return name;
}

vector<Department*> University::getDepartments() {
    return departments;
}

vector<Student*> University::getStudents() {
    return students;
}
