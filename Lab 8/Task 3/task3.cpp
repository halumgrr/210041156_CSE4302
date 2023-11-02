#include<iostream>
#include "task3_l3.h"
#include"task3_l4.h"



int main() {
    Address presentAddress("Anyhouse", "Anyroad", "Anytown", "12345", "Any District", "Any Country");
    Address permanentAddress("house", "road", "Hometown", "67890", "Home District", "Home Country");

    ContactInformation personalContact("123-456-7890", "987-654-3210", "person@example.com");
    ContactInformation emergencyContact("111-222-3333", "444-555-6666", "emergency@example.com");

    Manager employee("Tahsinul Islam", "E001", presentAddress, permanentAddress, personalContact, emergencyContact);

    cout << "Employee Name: " << employee.getName() << endl;
    cout << "Employee ID: " << employee.getEmpId() << endl;
    cout << "Present Address: " << presentAddress.getHouse() << ", " << presentAddress.getRoad() << ", "
              << presentAddress.getCity() << ", " << presentAddress.getZipCode() << endl;
    cout << "Permanent Address: " << permanentAddress.getHouse() << ", " << permanentAddress.getRoad() << ", "
              << permanentAddress.getCity() << ", " << permanentAddress.getZipCode() << endl;
    cout << "Personal Contact: " << personalContact.getPrimaryPhoneNumber() << ", " << personalContact.getSecondaryPhoneNumber() << ", "
              << personalContact.getEmail() << endl;
    cout << "Emergency Contact: " << emergencyContact.getPrimaryPhoneNumber() << ", " << emergencyContact.getSecondaryPhoneNumber() << ", "
              << emergencyContact.getEmail() << endl;

    return 0;
}





