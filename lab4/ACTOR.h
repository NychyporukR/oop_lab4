#ifndef ACTOR_H
#define ACTOR_H

#include "Person.h"

class ACTOR : public PERSON {
private:
    std::string movie;

public:
    ACTOR(const std::string& _name, int _age, const std::string& _movie);

    void display() const override;
};

#endif


