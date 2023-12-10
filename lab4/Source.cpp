#include <iostream>
#include <fstream>
#include <string>
#include "STUDENT.h"
#include "ACTOR.h"
#include "PERSON.h"
#include "KVNParticipant.h"

int main() {
    STUDENT student("John Doe", 20, "University A");
    ACTOR actor("Jane Smith", 30, "Movie X");
    KVN_PARTICIPANT kvnParticipant("Alice Johnson", 22, "University B", "Team Y");

    student.display();
    actor.display();
    kvnParticipant.display();

    std::ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "STUDENT: ";
        student.display();
        outputFile << "\n\nACTOR: ";
        actor.display();
        outputFile << "\n\nKVN_PARTICIPANT: ";
        kvnParticipant.display();

        outputFile.close();
        std::cout << "\nInformation written to output.txt" << std::endl;
    }
    else {
        std::cerr << "Unable to open the file." << std::endl;
    }

    return 0;
}
