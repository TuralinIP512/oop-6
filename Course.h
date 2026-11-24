#ifndef COURSE_H
#define COURSE_H

class Professor;
class Student;

#include <string>
#include <vector>

class Course {
private:
    std::string name_;
    std::vector<std::string> topics_;
    Professor* professor_;
    std::vector<Student*> students_;

public:
    Course(const std::string& name, Professor* prof);

    void addTopic(const std::string& topic);

    const std::string& getName() const;

    const std::vector<std::string>& getTopics() const;

    const Professor* getProfessor() const;

    void enrollStudent(Student* s);

    const std::vector<Student*>& getStudents() const;

    int getStudentCount() const;
    
    ~Course() = default;
};

#endif
