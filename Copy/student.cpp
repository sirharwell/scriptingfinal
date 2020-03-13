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
  for (int i = 0; i< daysArraySize; i++) this->daysToComplete[i] = 0;
}

Student::Student(string firstName, string lastName, string studentId, string emailAddress, string ageInYears, double daysToComplete[]) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->studentId = studentId;
  this->emailAddress = emailAddress;
  this->ageInYears = ageInYears;
  for (int i = 0; i< daysArraySize; i++) this->daysToComplete[i];
}

string Student::getFirstName() {
   return firstName;
}

string Student::getLastName() {
   return lastName;
}

string Student::getStudentId() {
    return studentId;
}

string Student::getAgeInYears() {
   return ageInYears;
}

string Student::getEmailAddress() {
   return emailAddress;
}

double * Student::getDaysToComplete() {
   return daysToComplete;
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

void Student:: setStudentId(string studentId) {
   this->studentId = studentId;
}

void Student:: setEmailAddress(string emailAddress) {
  this->emailAddress = emailAddress;
}

void Student:: setDaysToComplete(double daysToComplete[]) {
   for (int i = 0; i< daysArraySize; i++)
    this->daysToComplete[i] = daysToComplete[i];
   }



void Student::print() {
   cout << "Student ID: " << studentId << endl;
   cout << "First name: " << firstName << endl;
   cout << "Last name: " << lastName << endl;
   cout << "Email: " << emailAddress << endl;
   cout << "Age: " << ageInYears << endl;
   cout << "Days in Course: " << daysToComplete[0] << daysToComplete[1] << daysToComplete[2] << endl;
}

Student::~Student (){

}
