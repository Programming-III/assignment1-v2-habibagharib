#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student:class Person {
private:
int yearLevel;
string major;
public:
Student(string n,int y,string m,string n , int id):Person(string n , int id);
getName();
getId();

void display();
#endif
//#write student class here














