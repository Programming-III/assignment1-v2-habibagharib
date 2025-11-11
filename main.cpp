#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

void Person :: display(){
   cout<<"Name:"<<name<<endl;
  cout<<"id:"<<id<<endl; 
}
void Student:: display(){
cout<<"Student info:<<endl;
  cout<<"Name:"<<name<<endl; 
 cout<<"Year:"<<yearLevel<<endl;
 cout<<"Major:"<<major<<endl; 
}
void Instructor:: display(){
cout<< "Instructor info:"<<endl;
 cout<<"Name:"<<p.name<<endl; 
 cout<<"Department:"<<Department<<endl; 
 cout<<"Experience:"<<experienceYears<<endl;
}
void Course::addStudent(const Student& s){
if(currentStudents<maxStudents){
   students[currentStudents]==s;
}
else cout<<"course is full";}

void Course::displayCourseInfo(){
cout<<"Course:"<<courseCode<<"-"<<courseName<<endl;
cout<<"Max Students:"<<MaxStudents<<endl;
cout<<"currently Enrolled:"<<students;
}
Student Student(string n,int y,string m){
person:name=n;
yearLevel=y;
major=m;
}
Course Course(string c , string n,int m){
courseName=n;
courseCode=c;
maxStudents=m;}
Instructor Instructor(string n, string d,int y){
person:name=n;
department=d;
experienceYears=y;
}

int main(){
   Students s;
   Instructor I;
   Course c;
   c("CS101","Introduction to programming",3);
   s("Omar Nabil",2,"Informatics");
   I("Dr.Lina Khaled","computer science,5);
      c.displayCourseInfo();
   I.display;
   s.display;
   addStudent(s);
      
}

// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
