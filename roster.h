#include <iostream>
#include <string>
using namespace std;

#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"

class Roster {

    private:
  int lastIndex;
  int capacity;
  Student** students;

public:
  Roster();
  Roster(int capacity);

  Student* getStudentAt(int index);
  void parseThenAdd(string datarow);
  void add(string sId, string sFirst, string sLast, string sEmail, string sAge, double day1, double day2, double day3, DegreeType sd );
  void print_ALL();
  bool remove(string studentId);
  void printAverageDay(string studentId);
  void printInvalidEmail();
  void printByDegreeType(DegreeType sDegree);

  ~Roster();
};
