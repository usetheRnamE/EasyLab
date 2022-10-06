#include "Main.h"
#include "Data.h"

#include "ErrorsInterface.h"
#include "GrossError.h"
#include "RandomError.h"

inline void GetError(ErrorsInterface* errorToDetect)
{
	errorToDetect->ErrorDetect();
}

int main()
{
	//GUIstuff
	//GetInput

	Data* data = Data::GetInstance();

	const std::vector<double> testData = {0.589, 0.588, 0.590, 0.587, 1};
 
	data->GetData()->resize(testData.size());

	data->SetData(testData);

	GrossError* grossError = new GrossError();
	RandomError* randError = new RandomError();

	GetError(grossError);
	GetError(randError);
}
