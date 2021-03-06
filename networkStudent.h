#include <string>
#include "student.h"
using namespace std;

class NetworkStudent : public Student {
   public:

     NetworkStudent();
     NetworkStudent(
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

     ~NetworkStudent();
   };
