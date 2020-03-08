#include <iostream>
#include <string>
using namespace std;

#include "student.h"

void   SetFirstName(string firstName);
void   SetLastName(string lastName);
void   SetStudentId(string studentId);
void   SetEmailAddress(string emailAddress);
void   SetAgeInYears(int ageInYears);
void   SetDaysToComplete(array daysToComplete);

void Student:: SetFirstName(string firstName) {
   firstName = firstName;
   return;
}

void Student:: SetLastName(string lastName) {
   lastName = lastName;
   return;
}

void Student::SetAgeInYears(int ageInYears) {
   ageInYears = ageInYears;
   return;
}

void Student:: SetStudentId(string studentId) {
   studentId = studentId;
   return;
}

void Student:: SetEmailAddress(string emailAddress) {
   emailAddress = emailAddress;
   return;
}

void Student:: SetDaysToComplete(array daysToComplete) {
   daysToComplete = daysToComplete;
   return;
}

string Student::GetFirstName() const {
   return firstName;
}

string Student::GetLastName() const {
   return lastName;
}

int Student::GetAgeInYears() const {
   return ageInYears;
}

string Student::GetEmailAddress() const {
   return emailAddress;
}

array Student::DaysToComplete() const {
   return daysToComplete;
}


void Student::Print() const {
   cout << "Student ID: " << studentId << endl;
   cout << "First name: " << firstName << endl;
   cout << "Last name: " << lastName << endl;
   cout << "Email: " << emailAddress << endl;
   cout << "Age: " << ageInYears << endl;
   cout << "Days in Course: " << daysToComplete << endl;
}
