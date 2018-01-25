#include "Manager.hpp"

#include <iostream>

void Manager::print()
{
    std::cout << "Name: " << name_ << " Working time: " << workingTime_ << " Time worked: "
              << timeCounter_ << " Hourly Rate: " << hourlyRate_ << "pesos\n";
    std::cout << "Sociopath in: " << socipathPercentile_ << "%\n";
}

Manager::Manager()
{
    std::uniform_int_distribution<int> dist(20, 100);
    hourlyRate_ = dist(rd);
}

void Manager::fill()
{
    Worker::fill();
    std::cout << "Please input his sociopath procentile from 0 to 100\n";
    std::cin >> socipathPercentile_;
}
