// Assignment_5_PtB.cpp

#include <iostream>
#include "Worker.h"
#include "Doctor.h"
#include "Lawyers.h"
#include "SWE.h"
#include "SalesPerson.h"

using namespace std;

void printSalary(Worker& worker);

int main()
{
    Doctor doctor("Bob");
    Lawyer lawyer("John");
    Swe swe("Sarah");
    SalesPerson salesperson("Mike");

    cout << "Testing Accessor Functions:" << endl;

    cout << "Doctor Name: " << doctor.getName() << endl;
    cout << "Doctor Salary: $" << doctor.getSalary() << endl;

    cout << "Lawyer Name: " << lawyer.getName() << endl;
    cout << "Lawyer Salary: $" << lawyer.getSalary() << endl;

    cout << "Software Engineer Name: " << swe.getName() << endl;
    cout << "Software Engineer Salary: $" << swe.getSalary() << endl;

    cout << "Salesperson Name: " << salesperson.getName() << endl;
    cout << "Salesperson Salary: $" << salesperson.getSalary() << endl;


    cout << endl << "Testing Mutator Functions:" << endl;

    cout << endl << "Changing Doctor information:" << endl;
    doctor.setName("Robert");
    doctor.setSalary(300000);
    cout << "Name: " << doctor.getName() << endl;
    cout << "Salary: $" << doctor.getSalary() << endl;


    cout << endl << "Changing Lawyer information:" << endl;
    lawyer.setName("James");
    lawyer.setSalary(150000);
    cout << "Name: " << lawyer.getName() << endl;
    cout << "Salary: $" << lawyer.getSalary() << endl;


    cout << endl << "Changing Software Engineer information:" << endl;
    swe.setName("Emily");
    swe.setSalary(120000);
    cout << "Name: " << swe.getName() << endl;
    cout << "Salary: $" << swe.getSalary() << endl;


    cout << endl << "Changing Salesperson information:" << endl;
    salesperson.setName("Michael");
    salesperson.setSalary(70000);
    cout << "Name: " << salesperson.getName() << endl;
    cout << "Salary: $" << salesperson.getSalary() << endl;

    cout << endl << "Testing Polymorphic printSalary Function:" << endl;

    cout << endl << "Testing Doctor:" << endl;
    printSalary(doctor);

    cout << "Testing Lawyer:" << endl;
    printSalary(lawyer);

    cout << "Testing Software Engineer:" << endl;
    printSalary(swe);

    cout << "Testing Salesperson:" << endl;
    printSalary(salesperson);

    return 0;
}

void printSalary(Worker& worker)
{
    cout << "Name: " << worker.getName() << endl;
    cout << "Yearly Salary: $" << worker.getSalary() << endl;
    cout << "Weekly Salary: $" << worker.salaryPerWeek() << endl;
    cout << endl;
}