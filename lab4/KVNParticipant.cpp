#include "KVNParticipant.h"
#include <iostream>

KVN_PARTICIPANT::KVN_PARTICIPANT(const std::string& _name, int _age, const std::string& _university, const std::string& _team)
    : STUDENT(_name, _age, _university), team(_team) {}

void KVN_PARTICIPANT::display() const {
    STUDENT::display();
    std::cout << ", KVN Team: " << team << std::endl;
}
