#ifndef TASK2_L1_H
#define TASK2_L1_H


#include <string>
using namespace std;

class Employee {
private:
    string name;
    string emp_id;
    float monthly_salary;
    bool onDuty;

public:
    Employee(string name, string emp_id, float monthly_salary, bool onDuty)
        : name(name), emp_id(emp_id), monthly_salary(monthly_salary), onDuty(onDuty) {}

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
};

#endif