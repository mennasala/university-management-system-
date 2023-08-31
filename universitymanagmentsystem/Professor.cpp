#include "Professor.h"

Professor::Professor() {
    cout << "Professor Default Constructor Called" << endl;
}

Professor::Professor(int ProfessorId) : ProfessorId(ProfessorId) {
    cout << "Professor Parameterized Constructor Called" << endl;
}
void Professor::setProfessorId(int ProfessorId) {
    this->ProfessorId = ProfessorId;
}
int Professor::getProfessorId() {
    return ProfessorId;
}
void Professor::getPersonInfo() {
    cout << "Professor Info: Name = " << getName() << ", Age = " << getAge() << ", Gender = " << getGender() << ", Email = " << getEmail() << ", Phone = " << getPhoneNumber() << ", ProfessorId = " << getProfessorId() << endl;
}
Professor::~Professor() {
    cout << "Professor Destructor Called" << endl;
}
