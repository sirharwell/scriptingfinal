#include <string>
#include "student.h"
using namespace std;

class SoftwareStudent : public Student {
   public:

     SoftwareStudent();
     SoftwareStudent(
       string studentId,
       string firstName,
       string lastName,
       string emailAddress,
       string ageInYears,
       double days[],
       DegreeType degreeType
     );

     DegreeType getDegreeType();
     void print();

     ~SoftwareStudent();
   };
