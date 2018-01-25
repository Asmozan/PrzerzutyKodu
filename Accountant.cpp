#include "Accountant.hpp"

#include <iostream>

void Accountant::print()
{
    std::cout << "Name: " << name_ << " Working time: " << workingTime_ << " Time worked: "
              << timeCounter_ << " Hourly Rate: " << hourlyRate_ << "pesos\n";
    std::cout << "Have glasses: " << haveGlasses << "\n";
}

Accountant::Accountant()
{
    std::uniform_int_distribution<int> dist(20, 100);
    hourlyRate_ = dist(rd);
}

void Accountant::fill()
{
    Worker::fill();
    std::cout << "Have glasses?\n";
    std::string answer;
    std::cin >> answer;

    haveGlasses = answer == "yes" || "Yes";
}
