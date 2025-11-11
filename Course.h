#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course {
private:
String courseCode;
String courseName;
int maxStudents;
Student* students;
int currentStudents;
public:
Course(string c , string n,int m);
addStudent(const Student& s);
displayCourseInfo();














#endif
