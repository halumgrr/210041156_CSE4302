#ifndef TASK2_L2_H
#define TASK2_L2_H
#include"task2_l1.h"


class Manager : public Employee
{
public:
    Manager(string name, string emp_id): Employee(name, emp_id, 10000, true) {}
};

class Engineer : public Employee
{
public:
    Engineer(string name, string emp_id): Employee(name, emp_id, 8000, true) {}
};

class Designer : public Employee
{
public:
    Designer(string name, string emp_id): Employee(name, emp_id, 7000, true) {}
};

#endif
