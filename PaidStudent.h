#ifndef PAIDSTUDENT_H
#define PAIDSTUDENT_H

#include "Student.h"

class PaidStudent : public Student {
private:
    int tuition_;

public:
    PaidStudent(const std::string& name, int tuition);

    std::string getStatus() const;

    int getTuition() const;
};

#endif