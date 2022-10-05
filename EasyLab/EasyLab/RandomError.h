#pragma once
#include <vector>
#include <functional>

#include "Data.h"
#include "ErrorsInterface.h" 

class RandomError : public ErrorsInterface
{
private:
	Data* data;
    static double avarage;

public:
	RandomError() : data(data->GetInstance()) {}

	void ErrorDetection() override
	{
		if (!RandErrExist())
		{
			//return to main and say that random error doesn`t exist
			return;
		}

		Func();
	}

private:
	bool RandErrExist();
	double SumCount(double (*function)(const double&));
	double AvarageVal();
	double FindDeltasSum();
	double Func();
};

