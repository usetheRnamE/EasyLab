#include "GrossError.h"
#include "Data.h"

void GrossError::GrossErrorDetection()
{
	Data* data = Data::GetInstance();

	EvaluateData(data->GetData());
}

void GrossError::EvaluateData(std::vector<double>& data)
{
	
}

double GrossError::AvarageVal(std::vector<double>& data)
{
	std::for_each(data.begin(), data.end(), [](double& value) { /*Sum*/ });
}

void GrossError::AskConfirmation()
{

}

void GrossError::DeleteGrossError()
{

}
