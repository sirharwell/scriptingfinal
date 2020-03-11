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
  if (lastIndex < capacity) {
    lastIndex++;
      if (row[-1] == 'E') degreeType = SOFTWARE;
      else if (row[-1] == 'Y') degreeType = SECURITY;
      else if (row[-1] == 'K') degreeType = NETWORK;
      else {
        cerr << "Invalid Degree" << endl;
        exit(-1);
      }
  int rhs = row.find(",");
  string sId = row.substr(0, rhs);

  int lhs = rhs + 1;
  rhs = row.find(",", lhs);
  string sFirst = row.substr(lhs, rhs - lhs);

  lhs = rhs + 1;
  rhs = row.find(",", lhs);
  string sLast = row.substr(lhs, rhs - lhs);

  lhs = rhs + 1;
  rhs = row.find(",", lhs);
  string sEmail = row.substr(lhs, rhs - lhs);

  lhs = rhs + 1;
  rhs = row.find(",", lhs);
  int sAge = row.substr(lhs, rhs - lhs);

  lhs = rhs + 1;
  rhs = row.find(",", lhs);
  double sD1 = stod(row.substr(lhs, rhs - lhs));

  lhs = rhs + 1;
  rhs = row.find(",", lhs);
  double sD2 = stod(row.substr(lhs, rhs - lhs));

  lhs = rhs + 1;
  rhs = row.find(",", lhs);
  double sD3 = stod(row.substr(lhs, rhs - lhs));

  add(sId, sFirst, sLast, sEmail, sAge, sD1, sD2, sD3, degreeType);
  }

  else {
    cerr << "error, list has exceeded maximum capacity << end; << exiting now";
    exit(-1)
  }
}

void Roster::add(string sId, string sFirst, string sLast, string sEmail, int sAge, double sD1, double sD2, double sD3, degreeType sDegree) {
  double daysToComplete[Student::daysToCompleteNumber];
  daysToComplete[0] = sD1;
  daysToComplete[1] = sD2;
  daysToComplete[2] = sD3;
  if (sDegree == SOFTWARE) students[lastIndex] = new softwareStudent(sId,sFirst,sLast,sEmail,sAge,daysToComplete,degreeType);
  else if (sDegree == SECURITY) students[lastIndex] = new securityStudent(sId,sFirst,sLast,sEmail,sAge,daysToComplete,degreeType);
  else students[lastIndex] = new networkStudent(sId,sFirst,sLast,sEmail,sAge,daysToComplete,degreeType);
  }

void Roster::print_ALL() {
  for (int i = 0; i <= this->lastIndex; i++) (this->students)[i]->print();
  }

bool Roster::remove(string sId) {
  for (int i = 0; i <= lastIndex; i++) {
    if (this->students[i]->getStudentId() == sId) {
      found = true;
      delete this->students[i];
      this->students[i] = this->students[lastIndex];
      lastIndex--;
    }
  }
  return found;
}

void Roster::printAverageDaysToComplete(string studentId) {
  bool found = false;
  for (int i = 0; i <= lastIndex; i++) {
    if (this->students[i]->getStudentId() == studentId) {
      found = true;
      double* d = students[i]->getDaysToComplete();
      cout << "Average days to complete a course is " << (d[0] + d[1] + d[2]) / 3 << endl;
    }
  }
  if (!found) cout << "Student not found" << endl;
}

void Roster::printByDegreeType(degreeType d) {
  cout << "Printing Students of type " << studentTypeStrings[d] << endl;
  for (int i = 0; i <= lastIndex; i++) {
    if (this->students[i]->getDegreeType() = d) this->students[i]->print();
  }
}

Roster::~Roster() {
  for (int i = 0; i <= lastIndex; i++) {
    delete this->students[i];
  }
  delete students;
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
  cout << "Displaying all students" << endl;
  ros->print_ALL();

  cout << "Removing A3" << endl;
  if (ros->remove("A3")) {
    ros->print_ALL();
    numStudents--;
  }
  else cout << "Student not found" << endl;

  cout << "Removing A3" << endl;
    if (ros->remove("A3")) ros->print_ALL();
    else cout << "Student not found!" << endl;

  cout << "Printing average days to complete a course" << endl;
  for (int i = 0; i < numStudents; i++) {
    ros->printAverageDaysToComplete(ros->getStudentAt(i)->getStudentId());
  }

  for (int i = 0; i < 3; i++) ros->printByDegreeType((DegreeType) i);

  system("pause")
  return 0;
}
