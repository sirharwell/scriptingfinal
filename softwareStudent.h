#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class SoftwareStudent : public Student {
   public:

      void   SetDegreeType(string degreeType);
      string GetDegreeType() const;

   private:

      string degreeType;

      Student::Student() {
        degreeType = "None";

        return;
      }
      Student::~Student() {

        delete degreeType;

        return;
      }
      
      void   Print() const;
};

#endif
