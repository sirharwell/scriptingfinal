#include <iostream>
using namespace std;

#include "Student.h"
#include "Student.h"

void SoccerTeam::SetHeadStudent(Student Student) {
   headStudent = Student;
   return;
}

void SoccerTeam::SetAssistantStudent(Student Student) {
   assistantStudent = Student;
   return;
}

Student SoccerTeam::GetHeadStudent() const {
   return headStudent;
}

Student SoccerTeam::GetAssistantStudent() const {
   return assistantStudent;
}

void SoccerTeam::Print() const {
   cout << "HEAD Student: " << endl;
   headStudent.Print();
   cout << endl;

   cout << "ASSISTANT Student: " << endl;
   assistantStudent.Print();
   cout << endl;
   return;
}
