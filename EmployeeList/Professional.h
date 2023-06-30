#pragma once
#include "Employee.h"
class Professional :
    protected Employee
{
private:
    double salary;
public:
    Professional(double sal, double healthcareRate, double vacaDays);
    double getPay();
    double getVacationTime();
};

