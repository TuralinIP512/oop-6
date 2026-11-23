#ifndef BUDGETSTUDENT_H
#define BUDGETSTUDENT_H

#include "Student.h"

class BudgetStudent : public Student {
private:
    int scholarship_;

public:
    BudgetStudent(const std::string& name, int scholarship);

    std::string getStatus() const;

    int getScholarship() const;
};

#endif