#include "Department.h"
using namespace std;
Department::Department(string name) : departmentName(name) {}

Department::~Department() {  
    cout << "Department Destructor Called" << endl;
}

void Department::addCourseCode(string code) {
    courseCodes.push_back(code);
}

void Department::addProfessor(Professor* professor) { 
    professors.push_back(professor);
}

string Department::getDepartmentName() {
    return departmentName;
}

vector<string> Department::getCourseCodes() {
    return courseCodes;
}

vector<Professor*> Department::getProfessors() {
    return professors;
}
