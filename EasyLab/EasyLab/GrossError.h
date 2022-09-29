#pragma once
#include <vector>
#include <iostream>

class GrossError
{
public:
	void GrossErrorDetection();

private:
	void EvaluateData(std::vector<double>& data);
	double AvarageVal(std::vector<double>& data);
	void AskConfirmation();
	void DeleteGrossError();
};

