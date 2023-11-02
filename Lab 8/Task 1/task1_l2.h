#ifndef TASK1_L1_H
#define TASK1_L1_H

#include "task1_l1.h"

#include <iostream>
using namespace std;

class TwoYearMDS : public MonthlyDepositScheme
{
public:
    TwoYearMDS()
    {
    }

    ~TwoYearMDS()
    {
    }

    float getmaximuminterest() const
    {
        return maximuminterest;
    }

    void setmaximuminterest(float val)
    {
        maximuminterest = val;
    }

private:
    float maximuminterest;
};

class FiveYearMDS : public MonthlyDepositScheme
{
public:
    FiveYearMDS()
    {
    }

    ~FiveYearMDS()
    {
    }

    float getmaximuminterest() const
    {
        return maximuminterest;
    }

    void setmaximuminterest(float val)
    {
        maximuminterest = val;
    }

private:
    float maximuminterest;
};

class InitialDepositMDS : public MonthlyDepositScheme
{
public:
    InitialDepositMDS()
    {
    }

    ~InitialDepositMDS()
    {
    }

    float getmaximuminterest() const
    {
        return maximuminterest;
    }

    void setmaximuminterest(float val)
    {
        maximuminterest = val;
    }

    float getInitialDepositAmount() const
    {
        return InitialDepositAmount;
    }

    void setInitialDepositAmount(float val)
    {
        InitialDepositAmount = val;
    }

private:
    float maximuminterest;
    float InitialDepositAmount;
};

#endif // MONTHLYDEPOSITSCHEME_H
