#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
   public:


      void   SetFirstName(string firstName);
      void   SetLastName(string lastName);
      void   SetStudentId(string studentId);
      void   SetEmailAddress(string emailAddress);
      void   SetAgeYears(int ageInYears);
      void   SetDaysToComplete(array daysToComplete);

      string GetFirstName() const;
      string GetLastName() const;
      string GetStudentId() const;
      string GetEmailAddress() const;
      int GetAgeYears() const;
      string GetDaysToComplete() const;

   private:
      string firstName;
      string lastName;
      string studentId;
      string emailAddress;
      int ageInYears;
      string daysToComplete;

      Student::Student() {
        firstName = "No Name";
        lastName  = "No Name";
        studentId = "0000";
        emailAddress = "no email";
        ageInYears = "0";
        daysToComplete = "0";

        return;
      }
      Student::~Student() {
        delete firstName;
        delete lastName;
        delete studentId;
        delete emailAddress;
        delete ageInYears;
        delete daysToComplete;

        return;
      }

      void   Print() const;
};

#endif
