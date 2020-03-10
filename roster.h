#ifndef "Student.h"
#define "Student.h"

#include "Student.h"

class RosterArray {
   public:

     const string studentData[] =
 {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Ian,Harwell,iharwel@my.wgu.edu,31,19,20,25,SOFTWARE"
}

      void add(
      string studentID,
      string firstName,
      string lastName,
      string emailAddress,
      int age,
      int daysInCourse1, int daysInCourse2, int daysInCourse3,
      < degree program >);

      void remove(string studentID);

      void Print() const;

      void main()
      classRoster.printAll();
      classRoster.printInvalidEmails();
//loop through classRosterArray and for each element:
      classRoster.printAverageDaysInCourse(/*current_object's student id*/);
      classRoster.printByDegreeProgram(SOFTWARE);
      classRoster.remove("A3");
      classRoster.remove("A3");
 //expected: the above line should print a message saying such a student with this ID was not found.

   private:

};
