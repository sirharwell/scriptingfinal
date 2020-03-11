#include <string>
using namespace std;

class Student {
   public:
      const static in daysToCompleteNumber = 3;

   protected:

      string firstName;
      string lastName;
      string studentId;
      string emailAddress;
      int    ageInYears;
      double daysToComplete;
      DegreeType dtype;

  public:
      Student();
      Student(string firstName, string lastName, string studentId, string emailAddress, double daysToComplete[]);

      string getFirstName;
      string getLastName;
      string getStudentId;
      string getEmailAddress;
      int    getAgeInYears;
      double getDaysToComplete;
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
