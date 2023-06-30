#include "Professional.h"

Professional::Professional(double sal, double healthcareRate, double vacaDays)
{
	salary = sal;
	healthCareContributions = salary * healthcareRate;
	vacationHours = vacaDays * 8;
}

double Professional::getPay()
{
	return salary/12;
}

double Professional::getVacationTime()
{
	return vacationHours/8;
}

