#ifndef TASK2_H
#define TASK2_H

#include <iostream>
using namespace std;

class Weight
{
private:
    const double kgToPound;
    int pound;
    double ounce;

public:
    Weight() : pound(0), ounce(0.0), kgToPound(2.2) {}

    Weight(int pound, double ounce) : pound(pound), ounce(ounce), kgToPound(2.2) {}

    void showWeight()
    {
        cout << pound << "-" << ounce << " lbs" << endl;
    }

    Weight(double kg): kgToPound(2.2)
    {
        double totalPounds = kg * kgToPound;
        pound = static_cast<int>(totalPounds);
        ounce = (totalPounds - pound) * 10;
    }

    operator double()
    {
        return (pound + ounce / 10.0) / kgToPound;
    }
};



#endif