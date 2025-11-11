//
// Created by moham on 11/11/2025.
//

#ifndef ASSIGNMENT_COURSE_H
#define ASSIGNMENT_COURSE_H


class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student *students;
    int currentStudents;
public:
   void addStudent(const Student& s);
    void displayCourseInfo();
};


#endif
