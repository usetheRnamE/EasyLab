#pragma once
#include <vector>
//#include <list>

#include <mutex>

class Data
{
private:
    std::vector<double> data;
   // std::list<double> biggerData; use if data bigger than 64 B

private:
    static Data* instance;
    static std::mutex mutex;

protected:
    Data() {}
    ~Data() {}

public:
    Data(Data& other) = delete;
    void operator=(const Data&) = delete;

    static Data* GetInstance();

    void SetDataByElement(const double& userData, const int& index);
    std::vector<double>& GetData();
};