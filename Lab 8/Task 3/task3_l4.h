#ifndef TASK3_L4_H
#define TASK3_L4_H


#include"task3_l3.h"


class Manager : public Employee
{
public:
    Manager(string name, string emp_id, Address presentAddress, Address permanentAddress, ContactInformation personalContactInfo, ContactInformation emergencyContactInfo)
            : Employee(name, emp_id, 10000, true, presentAddress, permanentAddress, personalContactInfo, emergencyContactInfo) {}
};


class Engineer : public Employee
{
public:
    Engineer(string name, string emp_id, Address presentAddress, Address permanentAddress, ContactInformation personalContactInfo, ContactInformation emergencyContactInfo)
            : Employee(name, emp_id, 10000, true, presentAddress, permanentAddress, personalContactInfo, emergencyContactInfo) {}
};

class Designer : public Employee
{
public:
    Designer(string name, string emp_id, Address presentAddress, Address permanentAddress, ContactInformation personalContactInfo, ContactInformation emergencyContactInfo)
            : Employee(name, emp_id, 10000, true, presentAddress, permanentAddress, personalContactInfo, emergencyContactInfo) {}
};

#endif
