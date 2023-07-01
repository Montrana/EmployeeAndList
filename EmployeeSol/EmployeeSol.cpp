// EmployeeSol.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Montana Nicholson
// Date: June 23, 2023
// This is an example of inheritance using two types of employees.

#include <iostream>
#include "Employee.h"
#include "Nonprofessional.h"
#include "Professional.h"
using namespace std;

int main()
{
    Nonprofessional jack = Nonprofessional(35, 12, .05, .38);
    cout << "Jack (non professional):\n";
    cout << "Pay Per Week: " << jack.getPay() << endl;
    cout << "Health care contributions on paycheck: " << jack.getHealthCareContributions() << endl;
    cout << "Vacation hours earned per week: " << jack.getVacationTime() << endl;

    Professional emily = Professional(60000, .1, 15);
    cout << "Emily (professional):\n";
    cout << "Pay Per Month: " << emily.getPay() << endl;
    cout << "Health care contributions on paycheck: " << emily.getHealthCareContributions() << endl;
    cout << "Yearly vacation days: " << emily.getVacationTime();
}