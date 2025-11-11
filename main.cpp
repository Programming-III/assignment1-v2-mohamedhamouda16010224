#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person {
private:
    string name;
    int id;
public:
    Person::void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};







// ==================== Student Class Implementation ====================
class Student::public Person{
private:
    int yearLevel;
    string major;
    public:
   void Student::display(){
        cout<<"Year level: "<<yearLevel<<endl;
        cout<<"Major name: "<<major<<endl;
    }
};





// ==================== Instructor Class Implementation ====================

class Instructor:: public Person{
private:
    string department;
    int experienceYears;
    public:
    void Instructor::display(){
        cout<<"department: "<<department<<endl;
        cout<<"experienceYears: "<<experienceYears<<endl;
    }
};




// ==================== Course Class Implementation ====================

class Course {
private:
    string courseName;
    string courseCode;
    int maxstudents;
    Student* students;
    int currentStudents;
public:
    void Course::addStudent(const Student& s) {
if (currentStudents<maxstudents) {
    delete students;
    Student[] students= new array[++currentStudents];
    Student[currentStudents-1]=s;
}
}
    void Course::displayCourseInfo() {
        cout<<"Course name: "<<courseName<<endl;
        cout<<"Course code: "<<courseCode<<endl;
        cout<<"maxStudents: "<<maxstudents<<endl;
        cout<<"enrolled Students:"<<currentStudents<<endl;
    }
};





// ==================== Main Function ====================
int main() {


    return 0;
}
