#include <iostream>
#include <string>

using namespace std;
#include "networkStudent.h"


NetworkStudent::NetworkStudent():Student() {
   dtype = NETWORK;
   return;
}
NetworkStudent::NetworkStudent(
  string studentId,
  string firstName,
  string lastName,
  string emailAddress,
  string ageInYears,
  double days[],
  DegreeType degreeType
):
Student(studentId, firstName, lastName, emailAddress, ageInYears, days) {
  dtype = NETWORK;
}

DegreeType NetworkStudent::getDegreeType() {
  return NETWORK;
}

void NetworkStudent::print() {
  this->Student::print();
  cout << "Program: Network" << endl;
}
