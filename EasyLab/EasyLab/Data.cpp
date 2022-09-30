#include "Data.h"

Data* Data::instance{ nullptr };
std::mutex Data::mutex;

Data* Data::GetInstance()
{
    std::lock_guard<std::mutex> lock(mutex);
    if (instance == nullptr) instance = new Data();        
    return instance;
}

void Data::SetDataByElement(const double& userData, const int& index)
{ 
    data[index] = userData;
}

std::vector<double>& Data::GetData()
{
	return data;
}
