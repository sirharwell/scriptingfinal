#include <iostream>
using namespace std;

#include "roster.h"

Roster::Roster() {
  this->capacity = 0;
  this->lastIndex = -1;
  this->students = nullptr;
}

Roster::Roster(int capacity) {
  this->capacity = capacity;
  this->lastIndex = -1;
  this->students = new Student*[capacity];
}

Student * Roster::getStudentAt(int index) {
  return students[index];
}

void Roster::parseThenAdd(string row) {

}

int main() {
  int numStudents = 5;

  const string studentData[] =
 {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Ian,Harwell,iharwel@my.wgu.edu,31,45,17.62,SOFTWARE"
};

  Roster * ros = new Roster(numStudents);
  cout << Parsing Data and adding students:\t";
  for (int i = 0; i < numStudents: i++) {
    ros->parseThenAdd(studentData[i]);
  }
  cout << "Done" << endl;
