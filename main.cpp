#include "Course.h"
#include "Professor.h"
#include "Student.h"
#include <iostream>

int main() {
    Student Shirov("Shirov");
    std::cout << "Student name: " + Shirov.getName() << "\n";
    std::cout << "Status: " + Shirov.getStatus() << "\n";
    std::cout << "Tuition: ";
    std::cout << Shirov.getTuition() << "\n";
}