#include "PERSON.h"
#include <iostream>

PERSON::PERSON(const std::string& _name, int _age) : name(_name), age(_age) {}

void PERSON::display() const {
    std::cout << "Name: " << name << ", Age: " << age;
}

PERSON::~PERSON() {}