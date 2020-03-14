#include <string>
#include "student.h"
using namespace std;

class SecurityStudent : public Student {
   public:

     SecurityStudent();
     SecurityStudent(
       string studentId,
       string firstName,
       string lastName,
       string emailAddress,
       string ageInYears,
       double daysToComplete[],
       DegreeType degreeType
     );

     DegreeType getDegreeType();
     void print();

     ~SecurityStudent();
   };
