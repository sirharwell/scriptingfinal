#include <iostream>
#include <string>
using namespace std;

#include "softwareStudent.h"


void   SetDegreeType(string degreeType);


void Student:: SetDegreeType(string degreeType) {
   degreeType = degreeType;
   return;
}


string Student::GetDegreeType() const {
   return degreeType;
}

void Student::Print() const {
   cout << "Degree: " << degreeType << endl;
}
