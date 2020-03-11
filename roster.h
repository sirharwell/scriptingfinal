#include <iostream>
#include <string>
using namespace std;

#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"

class Roster {
public:
  Roster();
  Roster(int capacity);

  Student* getStudentAt(int index);
  void parseThenAdd(string datarow);
  void add(string sFirst, string sLast, string sId, string sEmail, sAge, double sD1, double sD2, double sD3, DegreeType sDegree );
  void print_ALL();
  bool remove(string studentId);
  void printAverageDaysToComplete(string studentId);
  void printInvalidEmailAddressEntries();
  void printByDegreeType(DegreeType s);

private:
  int lastIndex;
  int capacity;
  Student** students;

  ~Roster();
};
