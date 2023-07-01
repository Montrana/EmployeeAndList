#pragma once
#include "Employee.h"
class Professional :
    public Employee
{
public:
    /// <summary>
    /// Professional Constructor
    /// </summary>
    /// <param name="sal">the yearly salary</param>
    /// <param name="healthcareRate">how much of the paycheck is put toward healthcare</param>
    /// <param name="vacaDays">how many vacation days an employee gets per year</param>
    Professional(double sal, double healthcareRate, double vacaDays);
    /// <summary>
    /// Gets the monthly pay for the Employee
    /// </summary>
    /// <returns>the monthly pay</returns>
    const double getPay();
    /// <summary>
    /// Gets the amount of vacation hours the employee gets per year
    /// </summary>
    /// <returns>yearly vacation hours</returns>
    const double getVacationTime();
};

