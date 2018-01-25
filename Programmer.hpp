#ifndef ERRORSHANDLING_PROGRAMMER_HPP
#define ERRORSHANDLING_PROGRAMMER_HPP


#include <random>
#include "Worker.hpp"

class Programmer : public Worker
{
public:
    void print() override;
    void fill() override;

    Programmer();

private:
    std::string jobGrade_;
};


#endif //ERRORSHANDLING_PROGRAMMER_HPP
