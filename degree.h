#ifndef "Student.h"
#define "Student.h"

#include "Student.h"

class SoccerTeam {
   public:
      void SetHeadStudent(Student Student);
      void SetAssistantStudent (Student Student);

      Student GetHeadStudent() const;
      Student GetAssistantStudent() const;

      void Print() const;

   private:
      Student headStudent;
      Student assistantStudent;
      // Players omitted for brevity
};

#endif
