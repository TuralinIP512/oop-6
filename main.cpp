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
    std::cout << "\t" << "Status: " + Shirov.getStatus() << "\n";
    std::cout << "\t" << "Tuition: " << Shirov.getTuition() << "\n\n";

    // second commit
    BudgetStudent shirov("Shirov", 1500);
    PaidStudent kolmakov("Kolmakov", 2000000);
    std::cout << "Student name: " + shirov.getName() << "\n";
    std::cout << "\t" << "Status: " + shirov.getStatus() << "\n";
    std::cout << "\t" << "Tuition: " << shirov.getTuition() << "\n";
    std::cout << "\t" << "Scholarship: " << shirov.getScholarship() << "\n\n";

    std::cout << "Student name: " + kolmakov.getName() << "\n";
    std::cout << "\t" << "Status: " + kolmakov.getStatus() << "\n";
    std::cout << "\t" << "Tuition: " << kolmakov.getTuition() << "\n\n";

    // third commit
    Professor nilov("Nilov");
    Course optics("Optics", &nilov);
    optics.enrollStudent(&shirov);
    optics.enrollStudent(&kolmakov);
    optics.enrollStudent(&shirov);      // try to enroll again
    
    std::cout << "Course: " + optics.getName() << "\n";
    std::cout << "\t" << "Professor: " + nilov.getName() << "\n";
    std::cout << "\t" << "Students count: " << optics.getStudentCount() << "\n";
    for (const auto stud : optics.getStudents()) {
        std::cout << "\t" << stud->getName() << "\n";
    }
}

// g++ -Wall main.cpp Course.cpp Professor.cpp Student.cpp BudgetStudent.cpp PaidStudent.cpp -o lab6