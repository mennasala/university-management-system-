#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"  
using namespace std;
class Student : public Person {
private:
    int studentId{};
    double GPA{};

public:
    Student();
    Student(int studentId);
    void setStudentId(int studentId);
    int getStudentId();
    void setGPA(double GPA);
    double getGPA();

    void getPersonInfo() override;
    ~Student();
};

#endif
