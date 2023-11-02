#ifndef TASK3_L2_H
#define TASK3_L2_H

#include<string>
using namespace std;

class ContactInformation {
    private:
        string primaryPhoneNumber;
        string secondaryPhoneNumber;
        string email;

    public:
        ContactInformation(string _primaryPhoneNumber, string _secondaryPhoneNumber, string _email)
            : primaryPhoneNumber(primaryPhoneNumber), secondaryPhoneNumber(secondaryPhoneNumber), email(email) {}

        string getPrimaryPhoneNumber() const {
            return primaryPhoneNumber;
        }

        void setPrimaryPhoneNumber(int ppn) {
            primaryPhoneNumber = ppn;
        }

        string getSecondaryPhoneNumber() const {
            return secondaryPhoneNumber;
        }

        void setSecondaryPhoneNumber(int spn) {
            secondaryPhoneNumber = spn;
        }

        string getEmail() const {
            return email;
        }

        void setEmail(int eml) {
            email = eml;
        }
    };

    #endif