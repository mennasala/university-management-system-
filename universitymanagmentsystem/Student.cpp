#include "Student.h"

Student::Student() {
    cout << "Student Default Constructor Called" << endl;
}

Student::Student(int studentId) : studentId(studentId) {
    cout << "Student Parameterized Constructor Called" << endl;
}
void Student::setStudentId(int studentId) {
    this->studentId = studentId;
}
int Student::getStudentId() {
    return studentId;
}
void Student::setGPA(double GPA) {
    this->GPA = GPA;
}
double Student::getGPA() {
    return GPA;
}
void Student::getPersonInfo() {
    cout << "Student Info: Name = " << getName() << ", Age = " << getAge() << ", Gender = " << getGender() << ", Email = " << getEmail() << ", Phone = " << getPhoneNumber() << ", StudentId = " << getStudentId() << ", StudentGPA = " << getGPA() << endl;
}
Student::~Student() {
    cout << "Student Destructor Called" << endl;
}
