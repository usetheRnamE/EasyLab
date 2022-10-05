#include "GrossError.h"
#include "Data.h"

void GrossError::GetGrossError(const std::vector<double>& data)
{
	double grossError = 0, minValue = 0, maxValue = 0;

	bool isOnce = false;

	for (int i = 0; i < data.size(); i++)
	{
		if (!isOnce)
		{
			minValue = data[i];
			isOnce = true;
		}

		if (minValue > data[i])
		{
			minValue = data[i];
			Id->min = i;
		}

		if (maxValue < data[i])
		{
			maxValue = data[i];
			Id->max = i;
		}
	}

	AskConfirmation();
}

void GrossError::AskConfirmation()
{
	//bla bla bal we found some bullshit in ur data 
	// delete?
	// if yes: DeleteGrossError();
}

void GrossError::DeleteGrossError(const bool deleteMin = false, const bool deleteMax = false)
{
	if(deleteMax)
       data->GetData().erase(data->GetData().begin() + Id->max);
	
	if(deleteMin)
	   data->GetData().erase(data->GetData().begin() + Id->min);
}
