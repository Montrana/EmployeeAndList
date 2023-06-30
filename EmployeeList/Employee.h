#pragma once
class Employee
{
protected:
	double pay;
	double vacationTime;
	double healthCareContributions;
public:
	virtual const double getPay() = 0;
	virtual const double getVacationTime() = 0;
	/// <summary>
	/// Gets the healthcare contributions on a paycheck basis
	/// </summary>
	/// <returns>healthcare contributions</returns>
	virtual const double getHealthCareContributions();
};

