#include "ACTOR.h"
#include <iostream>

ACTOR::ACTOR(const std::string& _name, int _age, const std::string& _movie)
    : PERSON(_name, _age), movie(_movie) {}

void ACTOR::display() const {
    PERSON::display();
    std::cout << ", Movie: " << movie << std::endl;
}
