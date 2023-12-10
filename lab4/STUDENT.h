#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class STUDENT : public PERSON {
private:
    std::string university;

public:
    STUDENT(const std::string& _name, int _age, const std::string& _university);

    void display() const override;
};

#endif
