#include <iostream>
#include <string>

using namespace std;
#include "softwareStudent.h"


SoftwareStudent::SoftwareStudent():Student() {
   dtype = SOFTWARE;
   return;
}
SoftwareStudent::SoftwareStudent(
  string studentId,
  string firstName,
  string lastName,
  string emailAddress,
  string ageInYears,
  double days[],
  DegreeType degreeType
):
Student(studentId, firstName, lastName, emailAddress, ageInYears, days) {
  dtype = SOFTWARE;
}

DegreeType SoftwareStudent::getDegreeType() {
  return SOFTWARE;
}

void SoftwareStudent::print() {
  this->Student::print();
  cout << "Program: Software" << endl;
}
