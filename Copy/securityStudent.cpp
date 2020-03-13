#include <iostream>
#include <string>

using namespace std;
#include "securityStudent.h"


SecurityStudent::SecurityStudent():Student() {
   dtype = SECURITY;
   return;
}
SecurityStudent::SecurityStudent(
  string firstName,
  string lastName,
  string studentId,
  string emailAddress,
  string ageInYears,
  double daysToComplete[],
  DegreeType degreeType
):
Student(firstName, lastName, studentId, emailAddress, ageInYears, daysToComplete) {
  dtype = SECURITY;
}

DegreeType SecurityStudent::getDegreeType() {
  return SECURITY;
}

void SecurityStudent::print() {
  this->Student::print();
  cout << "SECURITY" << endl;
}

SecurityStudent::~SecurityStudent() {
  Student::~Student();
}
