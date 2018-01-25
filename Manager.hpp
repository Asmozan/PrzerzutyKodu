#ifndef ERRORSHANDLING_MANAGER_HPP
#define ERRORSHANDLING_MANAGER_HPP


#include "Worker.hpp"

class Manager : public Worker
{
public:
    void print() override;
    void fill() override;

private:
    int socipathPercentile_;
public:
    Manager();
};


#endif //ERRORSHANDLING_MANAGER_HPP
