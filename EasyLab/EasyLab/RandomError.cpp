#include "RandomError.h"
#include "Data.h"

void RandomError::ErrorDetect() 
{
	if (!RandErrExist())
	{
		//return to main and say that random error doesn`t exist
		return;
	}

	Func();
}

bool RandomError::RandErrExist()
{
	if(data->GetData()->size() == 1) return true;

	for(auto& value : *data->GetData())
	   if(avarage ==  value) return true;

	return false;
}

double RandomError::SumCount(std::function<double(const double&)> function)
{
	double sum = 0;

	for (auto& value : *data->GetData())
		sum += function(value);

	sum /= data->GetData()->size();

	return sum;
}

inline double RandomError::AvarageVal()
{
	return SumCount([](const double& val) -> double { return val; });
}

inline double RandomError::FindDeltasSum()
{
	return SumCount([&](const double& val) -> double { return pow(val - avarage, 2); });
}
 
inline double RandomError::Func()
{
	return /*Student coef * */ sqrt(FindDeltasSum() / (data->GetData()->size() - 1));
}
