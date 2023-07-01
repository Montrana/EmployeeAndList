#include "Professional.h"

Professional::Professional(double sal, double healthcareRate, double vacaDays)
{
	pay = sal;
	healthCareContributions = (pay / 12) * healthcareRate;
	vacationTime = vacaDays;
}

const double Professional::getPay()
{
	return pay/12;
}

const double Professional::getVacationTime()
{
	return vacationTime;
}

