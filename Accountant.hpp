#ifndef ERRORSHANDLING_ACCOUNTANT_HPP
#define ERRORSHANDLING_ACCOUNTANT_HPP

#include <random>
#include "Worker.hpp"

class Accountant : public Worker
{
public:
    Accountant();

    void print() override;
    void fill() override;

private:
    bool haveGlasses;
};

#endif //ERRORSHANDLING_ACCOUNTANT_HPP
