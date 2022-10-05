#include "StudentCoef.h"

void StudentCoef::ReadFile()
{
    /*std::ifstream fJson("StudentCoef.json");
    std::stringstream buffer;
    buffer << fJson.rdbuf();
    auto json = nlohmann::json::parse(buffer.str());

    std::cout << "\nNumber of questions: " << json["numOfQues"] << "\n";

    for (auto question : json["StudentCoef"])
    {

        std::cout << question["StudentCoef"] << "\n\n";
        int qCount = 0;
        for (auto opt : question["StudentCoef"])
        {
            qCount++;
            std::cout << qCount << ". " << opt << "\n";
        }
        std::cout << "Answer: " << question["answer"] << "\n";*/
}
