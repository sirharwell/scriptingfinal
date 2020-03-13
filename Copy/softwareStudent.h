#include <string>
#include "student.h"
using namespace std;

class SoftwareStudent : public Student {
   public:

     SoftwareStudent();
     SoftwareStudent(
       string firstName,
       string lastName,
       string studentId,
       string emailAddress,
       string ageInYears,
       double daysToComplete[],
       DegreeType degreeType
     );

     DegreeType getDegreeType();
     void print();

     ~SoftwareStudent();
   };
