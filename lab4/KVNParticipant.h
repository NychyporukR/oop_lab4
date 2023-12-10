#ifndef KVN_PARTICIPANT_H
#define KVN_PARTICIPANT_H

#include "Student.h"

class KVN_PARTICIPANT : public STUDENT {
private:
    std::string team;

public:
    KVN_PARTICIPANT(const std::string& _name, int _age, const std::string& _university, const std::string& _team);

    void display() const override;
};

#endif

