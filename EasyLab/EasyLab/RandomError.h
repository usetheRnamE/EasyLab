#pragma once
#include <vector>
#include <functional>

#include "Data.h"

class RandomError
{
private:
	Data* data;
    static double avarage;

public:
	RandomError() : data(data->GetInstance())
	{
		CalculateRandErr();
	}

private:
	void CalculateRandErr();
	bool RandErrExist();
	double SumCount(double (*function)(const double&));
	double AvarageVal();
	double FindDeltasSum();
	double Func();
};

