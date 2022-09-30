#include "RandomError.h"
#include "Data.h"

void RandomError::CalculateRandErr()
{
	if(!RandErrExist()) 
	{
	   //return to main and say that random error doesn`t exist
		return;
	}


}

bool RandomError::RandErrExist()
{
	if(data->GetData().size() == 1) return true;

    avarage = AvarageVal();

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

double RandomError::AvarageVal()
{
	return SumCount([](const double& val) { return val; });
}

double RandomError::FindDeltasSum()
{
	return SumCount([](const double& val) { return pow(val - avarage, 2); });
}

double RandomError::Func()
{
	
}
