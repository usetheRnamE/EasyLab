#include "Main.h"
#include "Data.h"

#include "GrossError.h"
#include "RandomError.h"

int main()
{
	//GUIstuff
	//GetInput

	Data* data = Data::GetInstance();

	const std::vector<double> testData = {0.589, 0.588, 0.590, 0.587, 1};
 
	data->GetData().resize(testData.size());

	for (int i = 0; i < testData.size(); i++)
		data->SetDataByElement(testData[i], i);

	GrossError grossError;
	grossError.ErrorDetection();

	RandomError randError;
	randError.ErrorDetection();
}
