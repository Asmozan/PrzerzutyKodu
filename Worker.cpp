#include "Worker.hpp"

#include <iostream>

void Worker::fill()
{
    std::cout << "Please input standard worker information with tempalte: \n"
            "(Name WorkingTime HoursWorkedThisMonth HourlyRate)\n";

    try
    {
        std::cin >> name_ >> workingTime_ >> timeCounter_ >> hourlyRate_;
        if(std::cin.fail())
        {
            throw 333;
        }
    }
    catch (int error)
    {
        std::cout << "Wrong input provided. Error Code: " << error << "\n";
    }
//    name_ = "John";
//    workingTime_ = 160;
//    timeCounter_ = 0;
//    hourlyRate_ = 0;
}

int Worker::getTimeCounter() const
{
    return timeCounter_;
}

