// still last step!

#include "Course.h"
#include "Professor.h"
#include "Student.h"
#include "BudgetStudent.h"
#include "PaidStudent.h"
#include <iostream>

int main() {
    // final version
    BudgetStudent shirov("Shirov", 1500);
    BudgetStudent alehina("Alehina", 1700);
    PaidStudent kolmakov("Kolmakov", 2000000);
    Professor schpigel("Schpigel");
    Professor nilov("Nilov");

    Course optics("Optics", &nilov);
    optics.addTopic("lenses");
    optics.addTopic("geometry of light spreading");
    Course sociology("Sociology", &schpigel);
    sociology.addTopic("social processes");
    sociology.addTopic("inner structure of society");
    sociology.addTopic("impact on masses");
    Course customerPsychology("Customer psychology", &schpigel);
    customerPsychology.addTopic("greetings");
    customerPsychology.addTopic("types of selling stratrgies");

    optics.enrollStudent(&shirov);
    optics.enrollStudent(&alehina);
    optics.enrollStudent(&shirov);      // try to enroll again

    kolmakov.enroll(&sociology);
    shirov.enroll(&sociology);

    customerPsychology.enrollStudent(&shirov);
    customerPsychology.enrollStudent(&alehina);

    std::cout << "------ List of students ------" << "\n";
    std::cout << kolmakov.getName() << " " << kolmakov.getStatus()
          << " " << kolmakov.getTuition() << "\n";
    for (const auto& course : kolmakov.getCourse()) {
        std::cout << "\t" << course->getName() << "\n";
    }

    std::cout << "\n" << shirov.getName() << " " << shirov.getStatus()
            << " " << shirov.getTuition() << "\n";
    for (const auto& course : shirov.getCourse()) {
        std::cout << "\t" << course->getName() << "\n";
    }

    std::cout << "\n" << alehina.getName() << " " << alehina.getStatus()
            << " " << alehina.getTuition() << "\n";
    for (const auto& course : alehina.getCourse()) {
        std::cout << "\t" << course->getName() << "\n";
    }

    // experiment 1
    Student* all[] = {&kolmakov, &shirov, &alehina};
    int totalScholarship = 0;
    for (Student* s : all) {
        totalScholarship += s->getScholarship();
    }
    std::cout << "Total scholarship: " << totalScholarship << "\n";

    std::cout << "\n------ List of courses ------" << "\n";
    std::cout << "Course: " + optics.getName() << "\n";
    std::cout << "\t" << "Professor: " + optics.getProfessor()->getName() << "\n";
    std::cout << "\t" << "Students count: " << optics.getStudentCount() << "\n";
    std::cout << "\tTopics:" << "\n";
    for (const auto& topic : optics.getTopics()) {
        std::cout << "\t\t" << topic << "\n";
    }
    std::cout << "\tStudents:\n";
    for (const auto& stud : optics.getStudents()) {
        std::cout << "\t\t" << stud->getName() << "\n";
    }

    std::cout << "\nCourse: " + sociology.getName() << "\n";
    std::cout << "\t" << "Professor: " + sociology.getProfessor()->getName() << "\n";
    std::cout << "\t" << "Students count: " << sociology.getStudentCount() << "\n";
    std::cout << "\tTopics:" << "\n";
    for (const auto& topic : sociology.getTopics()) {
        std::cout << "\t\t" << topic << "\n";
    }
    std::cout << "\tStudents:\n";
    for (const auto& stud : sociology.getStudents()) {
        std::cout << "\t\t" << stud->getName() << "\n";
    }

    std::cout << "\nCourse: " + customerPsychology.getName() << "\n";
    std::cout << "\t" << "Professor: " + customerPsychology.getProfessor()->getName() << "\n";
    std::cout << "\t" << "Students count: " << customerPsychology.getStudentCount() << "\n";
    std::cout << "\tTopics:" << "\n";
    for (const auto& topic : customerPsychology.getTopics()) {
        std::cout << "\t\t" << topic << "\n";
    }
    std::cout << "\tStudents:\n";
    for (const auto& stud : customerPsychology.getStudents()) {
        std::cout << "\t\t" << stud->getName() << "\n";
    }

    std::cout << "\n" + kolmakov.getName() << ", Tuition: " << kolmakov.getTuition() << "\n";
    std::cout << shirov.getName() << ", Scholarship: " << shirov.getScholarship() << "\n";
    std::cout << alehina.getName() << ", Scholarship: " << alehina.getScholarship() << "\n";
}


// g++ -Wall main.cpp Course.cpp Professor.cpp Student.cpp BudgetStudent.cpp PaidStudent.cpp -o lab6