#ifndef ERRORSHANDLING_WORKER_HPP
#define ERRORSHANDLING_WORKER_HPP

#include <string>
#include <random>

class Worker
{
protected:

protected:
    std::string name_;
    int workingTime_;
    int timeCounter_;
    std::random_device rd;

public:
    int getTimeCounter() const;

protected:
    int hourlyRate_;

public:
    virtual void print() = 0;
    virtual void fill();
};

#endif //ERRORSHANDLING_WORKER_HPP
