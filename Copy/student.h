#pragma once
#include <string>
#include "degree.h"
using std::string;


class Student {
   public:
      const static int daysArraySize = 3;

   protected:
      
      string studentId;
      string firstName;
      string lastName;
      string emailAddress;
      string ageInYears;
      double daysToComplete[daysArraySize];
      DegreeType dtype;

  public:
      Student();

      Student(string firstName, string lastName, string studentId, string emailAddress, string ageInYears, double daysToComplete[]);

      string getFirstName();
      string getLastName();
      string getStudentId();
      string getEmailAddress();
      string getAgeInYears();
      double* getDaysToComplete();
      virtual DegreeType getDegreeType() = 0;

      void setFirstName(string firstName);
      void setLastName(string lastName);
      void setStudentId(string studentId);
      void setEmailAddress(string emailAddress);
      void setAgeInYears(string ageInYears);
      void setDaysToComplete(double daysToComplete[]);

      virtual void print() = 0;

      ~Student();
};
