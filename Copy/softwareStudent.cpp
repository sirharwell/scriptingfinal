#include <iostream>
#include <string>

using namespace std;
#include "softwareStudent.h"


SoftwareStudent::SoftwareStudent():Student() {
   dtype = SOFTWARE;
   return;
}
SoftwareStudent::SoftwareStudent(
  string firstName,
  string lastName,
  string studentId,
  string emailAddress,
  string ageInYears,
  double daysToComplete[],
  DegreeType degreeType
):
Student(firstName, lastName, studentId, emailAddress, ageInYears, daysToComplete) {
  dtype = SOFTWARE;
}

DegreeType SoftwareStudent::getDegreeType() {
  return SOFTWARE;
}

void SoftwareStudent::print() {
  this->Student::print();
  cout << "SOFTWARE" << endl;
}

SoftwareStudent::~SoftwareStudent() {
  Student::~Student();
}
