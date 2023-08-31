#include <iostream>
#include "University.h"
#include "Department.h"
#include "Professor.h"
#include "Student.h"
#include "Course.h"
using namespace std;
int main() {
    // Create a University
    University myUniversity("My University");

    // Create Departments
    Department compScience("Computer Science");
    Department physics("Physics");

    compScience.addCourseCode("CS101");
    compScience.addCourseCode("CS102");
    physics.addCourseCode("PHY101");

    // Create Professors
    Professor prof1(101);
    Professor prof2(102);
    Professor prof3(103);

    // Create Students
    Student student1(201);
    Student student2(202);
    Student student3(203);

    // Add Professors to Departments
    compScience.addProfessor(&prof1); 
    compScience.addProfessor(&prof2);
    physics.addProfessor(&prof3);

    // Add Courses to Departments
    Course course1("CS101", "Introduction to Programming", &prof1, compScience);
    Course course2("CS102", "Data Structures", &prof2, compScience);
    Course course3("PHY101", "Physics Fundamentals", &prof3, physics);

    // Enroll Students in Courses
    course1.enrollStudent(&student1);
    course1.enrollStudent(&student2);
    course2.enrollStudent(&student2);
    course3.enrollStudent(&student3);
    // Add Departments to the University
    myUniversity.addDepartment(&compScience);
    myUniversity.addDepartment(&physics); 

    

    // Add Students to the University
    myUniversity.addStudent(&student1);
    myUniversity.addStudent(&student2);
    myUniversity.addStudent(&student3);

    // Display University Information
    cout << "University Name: " << myUniversity.getName() << endl;
    cout << "Departments: " << endl;
    for (Department* dept : myUniversity.getDepartments()) {
        cout << " - " << dept->getDepartmentName() << endl;
        cout << "   Professors: " << endl;
        for (Professor* prof : dept->getProfessors()) {
            cout << "     ";
            prof->getPersonInfo();
        }
        cout << endl;

        cout << "   Courses: ";
        vector<string>x = dept->getCourseCodes() ;
        cout << x.size() << endl;
        for (string courseCode : dept->getCourseCodes()) {
            cout << "     ";
            cout << courseCode << endl;
        }
        cout << endl;
    }

    cout << "Students: " << endl;
    for (Student* student : myUniversity.getStudents()) {
        student->getPersonInfo();
    } 
    return 0;
}
