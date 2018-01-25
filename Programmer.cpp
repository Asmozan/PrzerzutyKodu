#include "Programmer.hpp"


#include <iostream>

void Programmer::print()
{
    std::cout << "Name: " << name_ << " Working time: " << workingTime_ << " Time worked: "
              << timeCounter_ << " Hourly Rate: " << hourlyRate_ << "pesos\n";
    std::cout << "Job grade: " << jobGrade_ << "\n";
}

void Programmer::fill()
{
    Worker::fill();
    std::cout << "Please input his job grade\n";
    std::cin >> jobGrade_;
    jobGrade_ = "Senior";
}

Programmer::Programmer()
{
    std::uniform_int_distribution<int> dist(50, 250);
    hourlyRate_ = dist(rd);
}