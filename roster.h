#ifndef "Student.h"
#define "Student.h"

#include "Student.h"

class Student {
   public:

     const string studentData[] =
 {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Ian,Harwell,iharwel@my.wgu.edu,31,19,20,25,SOFTWARE"
}

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
