#include "Data.h"

Data* Data::instance{ nullptr };
std::mutex Data::mutex;

Data* Data::GetInstance()
{
    std::lock_guard<std::mutex> lock(mutex);
    if (instance == nullptr) instance = new Data();        
    return instance;
}

void Data::SetDataByElement(const std::vector<double>& userData)
{ 
    *data = userData;
}

std::vector<double>* Data::GetData()
{
	return data;
}
