#pragma once
#include <vector>
#include <iostream>

#include "ErrorsInterface.h"

struct ExtremumID
{
	unsigned int max = -1, min = -1;
};

class GrossError : public ErrorsInterface
{
private:
	 ExtremumID* Id;
	 Data* data;

public:
	GrossError() : Id(new ExtremumID()), data(Data::GetInstance()) {}
	~GrossError() { delete Id; }

	void ErrorDetection() override
	{
		GetGrossError(data->GetData());
	}

private:
	
	void GetGrossError(const std::vector<double>& data);
	void AskConfirmation();
	void DeleteGrossError(const bool deleteMin, const bool deleteMax);
};

