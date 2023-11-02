#include<iostream>
#include"task2_l1.h"
#include"task2_l2.h"


int main() {
    Manager manager("Ami", "M1");
    Engineer engineer("Tumi", "E1");
    Designer designer("She", "D1");

    cout << manager.getName() << " " << manager.getMonthlySalary() << " " << manager.yearlyIncome() << endl;
    cout << engineer.getName() << " " << engineer.getMonthlySalary() << " " << engineer.yearlyIncome() << endl;
    cout << designer.getName() << " " << designer.getMonthlySalary() << " " << designer.yearlyIncome() << endl;

    return 0;
}