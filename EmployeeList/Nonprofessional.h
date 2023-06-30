#pragma once
#include "Employee.h"
class Nonprofessional :
    protected Employee
{
private:
    double weeklyPay;
public:
    Nonprofessional(double hours, double hourlyPay, double healthcareRate, double vacaRate);
    double getPay();
    double getVacationTime();
};

