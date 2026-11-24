#include "Student.h"
#include <string>
#include <vector>


Student::Student(const std::string& name) : name_(name) {}

void Student::enroll(Course* c) {
    if (c == nullptr) return;
    for (Course* existing : courses_) {
        if (existing == c ) return;
    }
    courses_.push_back(c);
    c->enrollStudent(this);
}

const std::string& Student::getName() const { return name_; }

const std::vector<Course*>& Student::getCourse() const { return courses_; }

int Student::getCourseCount() const { return courses_.size(); }

std::string Student::getStatus() const { return "Student"; }

int Student::getTuition() const { return 0; }