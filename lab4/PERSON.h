#ifndef PERSON_H
#define PERSON_H

#include <string>

class PERSON {
protected:
    std::string name;
    int age;

public:
    PERSON(const std::string& _name, int _age);

    virtual void display() const;

    virtual ~PERSON();
};

#endif

