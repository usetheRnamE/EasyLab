#pragma once
#include <vector>
#include <iostream>

struct ExtremumID
{
	unsigned int maxIndex = -1, minIndex = -1;
} extremumID;

class GrossError
{
public:
	void GrossErrorDetection();

private:
	void GetGrossError(const std::vector<double>& data);
	void AskConfirmation();
	void DeleteGrossError(const bool deleteMin = false, const bool deleteMax = false);
};

