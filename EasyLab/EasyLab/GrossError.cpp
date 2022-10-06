#include "GrossError.h"
#include "Data.h"

void GrossError::ErrorDetect()
{
	GetGrossError();
}

void GrossError::GetGrossError()
{
	double grossError = 0, minValue = 0, maxValue = 0;

	bool isOnce = false;

	for (int i = 0; i < data->GetData()->size(); i++)
	{
		#define ValAtI data->GetData()->operator[](i)

		if (!isOnce)
		{
			minValue = ValAtI;
			isOnce = true;
		}

		if (minValue > ValAtI)
		{
			minValue = ValAtI;
			Id->min = i;
		}

		if (maxValue < ValAtI)
		{
			maxValue = ValAtI;
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
       data->GetData()->erase(data->GetData()->begin() + Id->max);
	
	if(deleteMin)
	   data->GetData()->erase(data->GetData()->begin() + Id->min);
}
