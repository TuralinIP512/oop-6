#include "Course.h"
#include "Professor.h"
#include "Student.h"
#include <stdexcept>

Course::Course(const std::string& name, Professor* prof) {
    if (name.empty() || prof == NULL) {
        throw std::invalid_argument("Название курса не может быть пустым");
    }

    name_ = name;
    professor_ = prof;
} 

void Course::addTopic(const std::string& topic) {
    if (topic.empty()) {
        throw std::invalid_argument("Название темы не может быть пустым");
    }

    topics_.push_back(topic);
}

const std::string& Course::getName() const { return name_; }

const std::vector<std::string>& Course::getTopics() const { return topics_; }

const Professor* Course::getProfessor() const { return professor_; }

void Course::enrollStudent(Student* s) {
    if (s == nullptr) return;
    for (Student* existing : students_) {
        if (existing == s) return;
    }
    students_.push_back(s);
}

const std::vector<Student*>& Course::getStudents() const { return students_; }

int Course::getStudentCount() const { 
    return static_cast<int>(students_.size()); 
}