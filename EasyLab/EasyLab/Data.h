#pragma once
#include <vector>
//#include <list>

#include <mutex>

class Data
{
private:
    std::vector<double>* data = new std::vector<double>;
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

    void SetData(const std::vector<double>& userData);
    std::vector<double>* GetData();
};