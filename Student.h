#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include <string>
#include <vector>

class Student {
private:
    std::string name_;
    std::vector<Course*> courses_;

public:
    explicit Student(const std::string& name);

    void enroll(Course* c);

    const std::string& getName() const;

    const std::vector<Course*>& getCourse() const;

    int getCourseCount() const;

    virtual ~Student() = default;

    std::string getStatus() const;

    int getTuition() const;

    int getScholarship() const;
};

#endif