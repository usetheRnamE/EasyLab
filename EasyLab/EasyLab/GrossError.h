#pragma once
#include <vector>
#include <iostream>

#include "ErrorsInterface.h"
#include "Data.h"

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
	GrossError() : Id(new ExtremumID()), data(data->GetInstance()) {}
	~GrossError() { delete Id; }

	void ErrorDetect() override;

private:
	
	void GetGrossError();
	void AskConfirmation();
	void DeleteGrossError(const bool deleteMin, const bool deleteMax);
};

