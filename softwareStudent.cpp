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
  double daysToComplete[],
  DegreeType degreeType
):
Student(studentId, firstName, lastName, emailAddress, ageInYears, daysToComplete) {
  dtype = SOFTWARE;
}

DegreeType SoftwareStudent::getDegreeType() {
  return SOFTWARE;
}

void SoftwareStudent::print() {
  this->Student::print();
  cout << "SOFTWARE" << endl;
}
