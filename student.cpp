#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;

Student::Student() {
  this->firstName = " ";
  this->lastName = " ";
  this->studentId = " ";
  this->emailAddress = " ";
  this->ageInYears = " ";
  for (int i = 0; i<dayArraySize; i++) this->days[i] = 0;
}

Student::Student(string firstName, string lastName, string studentId, string emailAddress, string ageInYears, double days[]) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->studentId = studentId;
  this->emailAddress = emailAddress;
  this->ageInYears = ageInYears;
  for (int i = 0; i< dayArraySize; i++) this->days[i] = days[i];
}

string Student::getStudentId() {
    return studentId;
}

string Student::getFirstName() {
   return firstName;
}

string Student::getLastName() {
   return lastName;
}

string Student::getAgeInYears() {
   return ageInYears;
}

string Student::getEmailAddress() {
   return emailAddress;
}

double * Student::getDays() {
   return days;
}


void Student:: setStudentId(string studentId) {
   this->studentId = studentId;
}

void Student:: setFirstName(string firstName) {
   this->firstName = firstName;
}

void Student:: setLastName(string lastName) {
   this->lastName = lastName;
}

void Student::setAgeInYears(string ageInYears) {
   this->ageInYears = ageInYears;
}

void Student:: setEmailAddress(string emailAddress) {
  this->emailAddress = emailAddress;
}

void Student:: setDays(double days[]) {
   for (int i = 0; i<dayArraySize; i++)
    this->days[i] = days[i];
   }



void Student::print() {
   cout << left << setw (4) << studentId;
   cout << left << "First name: " << setw (7) << firstName;
   cout << left << "Last name: " << setw (10) << lastName;
   cout << left << "Email: " << setw (24) << emailAddress;
   cout << "Age: " << ageInYears << "  ";
   cout << "daysincourse: " << "{" << days[0] << " " << days[1] << " " << days[2] << "}  ";
}

Student::~Student (){

}
