#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
   public:
      Student();

      void   SetFirstName(string firstName);
      void   SetLastName(string lastName);
      void   SetStudentId(string studentId);
      void   SetEmailAddress(string emailAddress);
      void   SetAgeYears(int ageInYears);
      void   SetDaysToComplete(array daysToComplete);
      void   SetDegreeType(string degreeType);

      string GetFirstName() const;
      string GetLastName() const;
      string GetStudentId() const;
      string GetEmailAddress() const;
      int GetAgeYears() const;
      string GetDaysToComplete() const;
      string GetDegreeType() const;

   private:
      string firstName;
      string lastName;
      string studentId;
      string emailAddress;
      int ageInYears;
      string daysToComplete;
      string degreeType;

      Student::Student() {
        firstName = "No Name";
        lastName  = "No Name";
        studentId = "0000";
        emailAddress = "no email";
        ageInYears = "0";
        daysToComplete = "0";
        degreeType = "None";

        return;
      }
      Student::~Student() {
        delete firstName;
        delete lastName;
        delete studentId;
        delete emailAddress;
        delete ageInYears;
        delete daysToComplete;
        delete degreeType;

        return;
      }

      MyClass::~MyClass() {
   cout << "Destructor called." << endl;
   delete subObj;
   return;
}

      void   Print() const;
};

#endif
