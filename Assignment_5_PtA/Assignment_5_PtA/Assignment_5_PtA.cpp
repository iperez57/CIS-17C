// Assignment_5_PtA.cpp


#include <iostream>
#include "StudentData.h"

using namespace std;

int main()
{
    string fN = "Bob";
    string lN = "Frank";
    string add = "11111 Cool Ln";
    string cit = "Mo";
    string state = "CA";
    string zip = "999999";
    string phone = "1111111111";
    bool freshman = true;

    cout << "Testing parameterized StudentData constructor:" << endl;

    StudentData student(lN, fN, add, cit, state, zip, phone, freshman);

    cout << endl << "Testing PersonData getter functions:" << endl;
    cout << "First Name: " << student.getFirstName() << endl;
    cout << "Last Name: " << student.getLastName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "City: " << student.getCity() << endl;
    cout << "State: " << student.getState() << endl;
    cout << "Zip: " << student.getZip() << endl;
    cout << "Phone: " << student.getPhone() << endl;

    cout << endl << "Testing StudentData getter functions:" << endl;
    cout << "Student ID: " << student.getStudentID() << endl;
    cout << "Incoming Freshman: " << student.getIncomingFreshman() << endl;


    cout << endl << "Testing PersonData setter functions:" << endl;

    student.setFirstName("Jude");
    student.setLastName("Dude");
    student.setAddress("111222 Cool Ln");
    student.setCity("Waka");
    student.setState("OH");
    student.setZip("2222222");
    student.setPhone("00011111");

    cout << "PersonData values after setters:" << endl;
    cout << "First Name: " << student.getFirstName() << endl;
    cout << "Last Name: " << student.getLastName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "City: " << student.getCity() << endl;
    cout << "State: " << student.getState() << endl;
    cout << "Zip: " << student.getZip() << endl;
    cout << "Phone: " << student.getPhone() << endl;


    cout << endl << "Testing StudentData setter functions:" << endl;

    student.setStudentID();
    student.setIncomingFreshman(false);

    cout << "Student ID after setter: " << student.getStudentID() << endl;
    cout << "Incoming Freshman after setter: "
        << student.getIncomingFreshman() << endl;


    cout << endl << "Testing default StudentData constructor:" << endl;

    StudentData defaultStudent;

    cout << "Default First Name: " << defaultStudent.getFirstName() << endl;
    cout << "Default Last Name: " << defaultStudent.getLastName() << endl;
    cout << "Default Address: " << defaultStudent.getAddress() << endl;
    cout << "Default City: " << defaultStudent.getCity() << endl;
    cout << "Default State: " << defaultStudent.getState() << endl;
    cout << "Default Zip: " << defaultStudent.getZip() << endl;
    cout << "Default Phone: " << defaultStudent.getPhone() << endl;
    cout << "Default Student ID: " << defaultStudent.getStudentID() << endl;
    cout << "Default Incoming Freshman: " << defaultStudent.getIncomingFreshman() << endl;

    cout << endl << "All tests completed successfully." << endl;

    return 0;
}