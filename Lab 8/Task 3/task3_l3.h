#ifndef TASK3_L3_H
#define TASK3_L3_H

#include<string>
#include"task3_l1.h"
#include"task3_l2.h"

class Employee {
    private:
        string name;
        string emp_id;
        float monthly_salary;
        bool onDuty;
        Address presentAddress;
        Address permanentAddress;
        ContactInformation personalContactInfo;
        ContactInformation emergencyContactInfo;

    public:
        Employee(string name, string emp_id, float monthly_salary, bool onDuty, Address presentAddress, Address permanentAddress, ContactInformation personalContactInfo, ContactInformation emergencyContactInfo)
            : name(name), emp_id(emp_id), monthly_salary(monthly_salary), onDuty(onDuty), presentAddress(presentAddress), permanentAddress(permanentAddress), personalContactInfo(personalContactInfo), emergencyContactInfo(emergencyContactInfo) {}

        string getName() const {
        return name;
    }

    void setName(string nm) {
        name = nm;
    }

    string getEmpId() const {
        return emp_id;
    }

    void setEmpId(string eid) {
        emp_id = eid;
    }

    float getMonthlySalary() const {
        return monthly_salary;
    }

    void setMonthlySalary(float mnthly_sal) {
        monthly_salary = mnthly_sal;
    }

    bool isOnDuty() const {
        return onDuty;
    }

    void setOnDuty(bool stat) {
        onDuty = stat;
    }

    float yearlyIncome() const {
        return monthly_salary * 12;
    }

    Address getPresentAddress() const {
        return presentAddress;
    }

    void setPresentAddress(Address paddrs)
    {
        presentAddress = paddrs;
    }
    
    Address getPermanentAddress() const {
        return permanentAddress;
    }

    void setPermanenetAddress(Address praddrs)
    {
        permanentAddress = praddrs;
    }

    ContactInformation getPersonalContact() const {
        return personalContactInfo;
    }

    void setPersonalContact(ContactInformation pcont)
    {
        personalContactInfo = pcont;
    } 

    ContactInformation getEmerContact() const {
        return emergencyContactInfo;
    }

    void setEmerContact(ContactInformation econt)
    {
        emergencyContactInfo = econt;
    } 

};

#endif