#pragma once
#include <vector>
#include <iostream>

struct ExtremumID
{
	unsigned int max = -1, min = -1;
};

class GrossError
{
private:
	 ExtremumID* Id;

public:
	void GrossErrorDetection();

	GrossError() { ExtremumID* Id = new ExtremumID(); }
	~GrossError() { delete Id; }
	
private:
	void GetGrossError(const std::vector<double>& data);
	void AskConfirmation();
	void DeleteGrossError(const bool deleteMin, const bool deleteMax);
};

