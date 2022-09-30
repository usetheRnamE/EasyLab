#pragma once
#include <vector>

class RandomError
{
private:
	Data* data;
	static double avarage;

public:
	void CalculateRandErr();

private:
	bool RandErrExist();
	double SumCount(double (*function)(const double&));
	double AvarageVal();
	double FindDeltasSum();
	double Func();
};

