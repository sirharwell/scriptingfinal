#include <iostream>
#include <string>
using namespace std;

#include "student.h"

Student::Student() {
  this->firstName = " ";
  this->lastName = " ";
  this->studentId = " ";
  this->emailAddress = " ";
  this->ageInYears = " ";
  for (in i = 0; i<daysToCompleteNumber; i++) this->daysToComplete[i] = 0;
}

Student::Student(string firstName, string lastName, string studentId, string emailAddress, double daysToComplete[]) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->studentId = studentId;
  this->emailAddress = emailAddress;
  this->ageInYears = ageInYears;
  for (int i = 0; i<daysToCompleteNumber; i++) this->daysToComplete[i];
}

string Student::getFirstName() {
   return firstName;
}

string Student::getLastName() {
   return lastName;
}

int Student::getAgeInYears() {
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

void Student::setAgeInYears(int ageInYears) {
   this->ageInYears = ageInYears;
}

void Student:: setStudentId(string studentId) {
   this->studentId = studentId;
}

void Student:: setEmailAddress(string emailAddress) {
  this->emailAddress = emailAddress;
}

void Student:: setDaysToComplete(double daysToComplete[]) {
   for (int i = 0; i<daysToCompleteNumber; i++)
    this->daysToComplete[i] = daysToComplete[i];
   }



void Student::Print() {
   cout << "Student ID: " << studentId << endl;
   cout << "First name: " << firstName << endl;
   cout << "Last name: " << lastName << endl;
   cout << "Email: " << emailAddress << endl;
   cout << "Age: " << ageInYears << endl;
   cout << "Days in Course: " << daysToComplete[0] << daysToComplete[1] << daysToComplete[2] << endl;
}

Student::~Student (){

}
