#include "RandomError.h"

double RandomError::AvarageVal(const std::vector<double>& data)
{
	double sum = 0;
	for (auto& value : data)
		sum += value;

	return sum / data.size();
}
