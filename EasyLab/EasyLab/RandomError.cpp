#include "RandomError.h"
#include "Data.h"

bool RandomError::RandErrExist()
{
	if(data->GetData().size() == 1) return true;

	for(auto& value : data->GetData())
	   if(avarage ==  value) return true;

	return false;
}

double RandomError::SumCount(double (*function)(const double&))
{
	double sum = 0;

	for (auto& value : data->GetData())
		sum += function(value);

	sum /= data->GetData().size();

	return sum;
}

inline double RandomError::AvarageVal()
{
	return SumCount([](const double& val) { return val; });
}

inline double RandomError::FindDeltasSum()
{
	return SumCount([](const double& val) { return pow(val - avarage, 2); });
}

double RandomError::Func()
{
	return /*Student coef * */ sqrt(FindDeltasSum() / (data->GetData().size() - 1));
}
