#pragma once
#include <vector>
#include <functional>

#include "Data.h"
#include "ErrorsInterface.h" 

class RandomError : public ErrorsInterface
{
private:
	Data* data;
    double avarage = 0;

double Func();

public:
	RandomError() : data(data->GetInstance()) {}

	void ErrorDetect() override;

private:
	bool RandErrExist();
	double SumCount(std::function<double(const double&)>);
	double AvarageVal();
	double FindDeltasSum();

};

