#include <algorithm>
#include <iostream>
#include <vector>
#include <memory>
#include <type_traits>

#include <cxxabi.h>

#include "Accountant.hpp"
#include "Programmer.hpp"
#include "Manager.hpp"
#include "Worker.hpp"

template <typename T>
void printSector(std::vector<std::unique_ptr<Worker>>& workers)
{
    std::cout << "Sector: " << abi::__cxa_demangle(typeid(T).name(), nullptr, nullptr, nullptr) << "\n";
    for(const auto& worker : workers)
    {
        if (typeid(T) == typeid(*worker))
        {
            worker->print();
        }
    }
}

int main()
{
    std::unique_ptr<Programmer> programmer = std::make_unique<Programmer>();
    programmer->fill();

    std::vector<std::unique_ptr<Worker>> workers;

    for(int i = 0; i < 3; i++)
    {
        workers.push_back(std::make_unique<Programmer>());
    }
    workers.push_back(std::make_unique<Accountant>());
    workers.push_back(std::make_unique<Manager>());

    workers.push_back(std::move(programmer));

    for(int i = 0; i < 10; i++)
    {
        workers.push_back(std::make_unique<Programmer>());
    }

    auto standardWorkingHours = 40;
    int weeksInMonth = 4;

    std::vector<std::unique_ptr<Worker>> workersWithOvertime;


    for(const auto& worker : workers)
    {
        worker->getTimeCounter() > standardWorkingHours * weeksInMonth ? worker->print() : void();
    }

    printSector<Programmer>(workers);
    printSector<Accountant>(workers);
    printSector<Manager>(workers);

    return 0;
}