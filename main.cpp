#include "Course.h"
#include "Professor.h"
#include "Student.h"
#include "BudgetStudent.h"
#include "PaidStudent.h"
#include <iostream>

int main() {
    // first commit
    Student Shirov("Shirov");
    std::cout << "Student name: " + Shirov.getName() << "\n";
    std::cout << "Status: " + Shirov.getStatus() << "\n";
    std::cout << "Tuition: " << Shirov.getTuition() << "\n\n";

    // second commit
    BudgetStudent shirov("Shirov", 1500);
    PaidStudent kolmakov("Kolmakov", 2000000);
    std::cout << "Student name: " + shirov.getName() << "\n";
    std::cout << "Status: " + shirov.getStatus() << "\n";
    std::cout << "Tuition: " << shirov.getTuition() << "\n";
    std::cout << "Scholarship: " << shirov.getScholarship() << "\n\n";

    std::cout << "Student name: " + kolmakov.getName() << "\n";
    std::cout << "Status: " + kolmakov.getStatus() << "\n";
    std::cout << "Tuition: " << kolmakov.getTuition() << "\n";
}

// g++ -Wall main.cpp Course.cpp Professor.cpp Student.cpp BudgetStudent.cpp PaidStudent.cpp -o lab6