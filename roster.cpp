#include <iostream>
#include "roster.h"
using std::cout;
using std::cerr;



Roster::Roster() {
    this->capacity = 0;
    this->lastIndex = -1;
    this->students = nullptr;
}

Roster::Roster(int capacity) {
    this->capacity = capacity;
    this->lastIndex = -1;
    this->students = new Student * [capacity];
}

Student* Roster::getStudentAt(int index) {
    return students[index];
}

void Roster::parseThenAdd(string row) {
    if (lastIndex < capacity) {
        lastIndex++;
        DegreeType degreeType;
        if (row.find("SOFTWARE") != std::string::npos) degreeType = SOFTWARE;
        else if (row.find("SECURITY") != std::string::npos) degreeType = SECURITY;
        else if (row.find("NETWORK") != std::string::npos) degreeType = NETWORK;
        else {
            cerr << "Invalid Degree" << endl;
            exit(-1);
        }
        int rhs = row.find(",");
        string sId = row.substr(0, rhs);

        int lhs = rhs + 1;
        rhs = row.find(",", lhs);
        string sFirst = row.substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = row.find(",", lhs);
        string sLast = row.substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = row.find(",", lhs);
        string sEmail = row.substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = row.find(",", lhs);
        string sAge = row.substr(lhs, rhs - lhs);

        lhs = rhs + 1;
        rhs = row.find(",", lhs);
        double day1 = stod(row.substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = row.find(",", lhs);
        double day2 = stod(row.substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = row.find(",", lhs);
        double day3 = stod(row.substr(lhs, rhs - lhs));

        add(sId, sFirst, sLast, sEmail, sAge, day1, day2, day3, degreeType);
    }

    else {
        cerr << "error, list has exceeded maximum capacity << end; << exiting now";
        exit(-1);
    }
}

void Roster::add(string sId, string sFirst, string sLast, string sEmail, string sAge, double day1, double day2, double day3, DegreeType sd) {
    double studentDays[Student::dayArraySize];
    studentDays[0] = day1;
    studentDays[1] = day2;
    studentDays[2] = day3;
    if (sd == SOFTWARE) students[lastIndex] = new SoftwareStudent(sId, sFirst, sLast, sEmail, sAge, studentDays, sd);
    else if (sd == SECURITY) students[lastIndex] = new SecurityStudent(sId, sFirst, sLast, sEmail, sAge, studentDays, sd);
    else students[lastIndex] = new NetworkStudent(sId, sFirst, sLast, sEmail, sAge, studentDays, sd);
}

void Roster::print_ALL() {
    for (int i = 0; i <= this->lastIndex; i++) (this->students)[i]->print();
}

bool Roster::remove(string sId) {
    bool found = false;
    for (int i = 0; i <= lastIndex; i++) {
        if (this->students[i]->getStudentId() == sId) {
            found = true;
            delete this->students[i];
            this->students[i] = this->students[lastIndex];
            lastIndex--;
        }
    }
    return found;
}

void Roster::printAverageDay(string studentId) {
    bool found = false;
    for (int i = 0; i <= lastIndex; i++) {
        if (this->students[i]->getStudentId() == studentId) {
            found = true;
            double* d = students[i]->getDays();
            cout << "Average days to complete a course for " << studentId << " is " << (d[0] + d[1] + d[2]) / 3 << endl;
        }
    }
    if (!found) cout << "Student not found" << endl;
}

void Roster::printInvalidEmail() {
    cout << "Displaying invalid email entries" << endl;
    for (int i = 0; i <= lastIndex; i++) {
        string e = students[i]->getEmailAddress();
        if (e.find(' ') != std::string::npos) {
            cout << "Email Address " << students[i]->getStudentId() << ": " << e << endl;
        }
        else if (e.find('@') == std::string::npos) {
            cout << "Email Address " << students[i]->getStudentId() << ": " << e << endl;;
        }
        else if (e.find('.') == std::string::npos) {
            cout << "Email Address " << students[i]->getStudentId() << ": " << e << endl;
        }
        else {}
    }
}

void Roster::printByDegreeType(DegreeType d) {
    cout << "Printing Students of type " << degreeTypeStrings[d] << endl;
    for (int i = 0; i <= lastIndex; i++) {
        if (this->students[i]->getDegreeType() == d) this->students[i]->print();
    }
}

Roster::~Roster() {
    for (int i = 0; i <= lastIndex; i++) {
        delete this->students[i];
    }
    delete students;
}

int main() {
    int numStudents = 5;

    const string studentData[5] = {
   "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
   "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
   "A5,Ian,Harwell,iharwel@my.wgu.edu,31,45,17,62,SOFTWARE"
    };

    cout << "Scripting and Programming - Applications – C867, C++, #000683773, Ian Harwell" << endl;

    Roster* ros = new Roster(numStudents);
    cout << "Parsing Data and adding students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        ros->parseThenAdd(studentData[i]);
    }
    cout << "Done" << endl;
    cout << "Displaying all students" << endl;
    ros->print_ALL();

    cout << "Removing A3" << endl;
    if (ros->remove("A3")) {
        ros->print_ALL();
        numStudents--;
    }
    else cout << "Student not found" << endl;

    cout << "Removing A3" << endl;
    if (ros->remove("A3")) ros->print_ALL();
    else cout << "Student not found!" << endl;

    cout << "Printing average days to complete a course" << endl;
    for (int i = 0; i < numStudents; i++) {
        ros->printAverageDay(ros->getStudentAt(i)->getStudentId());
    }

    ros->printInvalidEmail();

    for (int i = 0; i < 3; i++) ros->printByDegreeType((DegreeType)i);


    delete ros;
    return 0;
}
