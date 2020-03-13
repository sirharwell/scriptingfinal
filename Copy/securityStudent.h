#include <string>
#include "student.h"
using namespace std;

class SecurityStudent : public Student {
   public:

     SecurityStudent();
     SecurityStudent(
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

     ~SecurityStudent();
   };
