#include <iostream>
#include <string>
using namespace std;
#include "networkStudent.h"


NetworkStudent::NetworkStudent():Student {
   dType = NETWORK;
   return;
}
NetworkStudent::NetworkStudent(
  string firstName,
  string lastName,
  string studentId,
  string emailAddress,
  int    ageInYears,
  double daysToComplete[],
  DegreeType degreeType
):
Student(firstName, lastName, studentId, emailAddress, ageInYears, daysToComplete) {
  dtype = NETWORK;
}

DegreeType NetworkStudent::getDegreeType() {
  return NETWORK;
}

void NetworkStudent::print() {
  this->Student::print();
  cout << "NETWORK" << endl;
}

NetworkStudent::~NetworkStudent() {
  Student::~Student();
}
