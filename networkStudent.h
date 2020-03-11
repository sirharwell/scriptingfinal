#include <string>
#include "student.h"
using namespace std;

class NetworkStudent : public Student {
   public:

     NetworkStudent();
     NetworkStudent(
       string firstName,
       string lastName,
       string studentId,
       string emailAddress,
       int    ageInYears,
       double daysToComplete[],
       DegreeType degreeType
     );

     DegreeType getDegreeType();
     void print();

     ~NetworkStudent();
   };
