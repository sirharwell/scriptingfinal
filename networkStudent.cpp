#include <iostream>
#include <string>
#include "networkStudent.h"
using namespace std;



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
  double daysToComplete[],
  DegreeType degreeType
):
Student(studentId, firstName, lastName, emailAddress, ageInYears, daysToComplete) {
  dtype = NETWORK;
}

DegreeType NetworkStudent::getDegreeType() {
  return NETWORK;
}

void NetworkStudent::print() {
  this->Student::print();
  cout << "NETWORK" << endl;
}
