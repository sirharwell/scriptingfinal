#pragma once
#include <string>
#include "degree.h"
using std::string;


class Student {
   public:
      const static int dayArraySize = 3;

   protected:

      string studentId;
      string firstName;
      string lastName;
      string emailAddress;
      string ageInYears;
      double days[dayArraySize];
      DegreeType dtype;

  public:
      Student();

      Student(string studentId, string firstName, string lastName, string emailAddress, string ageInYears, double days[]);

      string getStudentId();
      string getFirstName();
      string getLastName();
      string getEmailAddress();
      string getAgeInYears();
      double* getDays();
      virtual DegreeType getDegreeType() = 0;

      void setStudentId(string studentId);
      void setFirstName(string firstName);
      void setLastName(string lastName);
      void setEmailAddress(string emailAddress);
      void setAgeInYears(string ageInYears);
      void setDays(double days[]);

      virtual void print() = 0;

      ~Student();
};
