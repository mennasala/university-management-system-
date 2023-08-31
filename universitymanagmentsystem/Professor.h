#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"  

class Professor : public Person {
private:
    int ProfessorId{};

public:
    Professor();
    Professor(int ProfessorId);
    void setProfessorId(int ProfessorId);
    int getProfessorId();
    void getPersonInfo() override;
    ~Professor();
};

#endif
