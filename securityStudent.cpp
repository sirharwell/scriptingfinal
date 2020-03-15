#include <iostream>
#include <string>

using namespace std;
#include "securityStudent.h"


SecurityStudent::SecurityStudent():Student() {
   dtype = SECURITY;
   return;
}
SecurityStudent::SecurityStudent(
  string studentId,
  string firstName,
  string lastName,
  string emailAddress,
  string ageInYears,
  double days[],
  DegreeType degreeType
):
Student(studentId, firstName, lastName, emailAddress, ageInYears, days) {
  dtype = SECURITY;
}

DegreeType SecurityStudent::getDegreeType() {
  return SECURITY;
}

void SecurityStudent::print() {
  this->Student::print();
  cout << "Program: Security" << endl;
}
