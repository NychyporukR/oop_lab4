#include "Student.h"
#include <iostream>

STUDENT::STUDENT(const std::string& _name, int _age, const std::string& _university)
    : PERSON(_name, _age), university(_university) {}

void STUDENT::display() const {
    PERSON::display();
    std::cout << ", University: " << university << std::endl;
}
