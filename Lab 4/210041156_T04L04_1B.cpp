#include<iostream>
using namespace std;

class ZooAnimal
{
    private :
        string nameOfAnimal;
        int birthYear;
        int cageNumber;
        float weight;
        int height;

    public:
        ZooAnimal() : nameOfAnimal(" "" "), birthYear(2023), cageNumber(0), weight(1), height(1){}

        void getAge()
        {
            cout << 2023 - birthYear << endl;
        }

        void displayInfo()
        {
            cout << "Name : " <<nameOfAnimal << endl;
            cout << "Birth Year : " <<birthYear << endl;
            cout << "Cage Number : " <<cageNumber << endl;
            cout << "Weight : " <<weight << endl;
            cout << "Height : " <<height << endl;
        }

        void setName(string s)
        {
            nameOfAnimal = s;
        }

        void getName()
        {
            cout << "Name : " <<nameOfAnimal << endl; 
        }

        void setBirth(int n)
        {
            if(n < 0)
            {
                cout << "Invalid BirthYear" << endl;
            }
            else{
                birthYear = n;
            }
        }

        void getBirth()
        {
            cout << "Birth Year : " <<birthYear << endl;
        }

        void setCagenumber(int no)
        {
            if(no <= 0)
                cout << "Invalid cage number" << endl;
            else{
                cageNumber = no;
            }
        }

        void getCagenumber()
        {
            cout << "Cage Number : " <<cageNumber << endl;
        }

        void setWeight(float k)
        {
            if(k <= 0)
                cout << "Invalid weight" << endl;
        }

        void getWeight()
        {
             cout << "Weight : " <<weight << endl;
        }

        void setHeight(int p)
        {
            if(p  <= 0)
                cout << "Invalid height" << endl;
        }

        void getHeight()
        {
            cout << "Height : " <<height << endl;
        }

        ~ZooAnimal()
        {
            cout << "Name : " <<nameOfAnimal << endl;
            cout << "Birth Year : " <<birthYear << endl;
            cout << "Cage Number : " <<cageNumber << endl;
            cout << "Weight : " <<weight << endl;
            cout << "Height : " <<height << endl;
        }
};

int main()
{
    ZooAnimal z;
    z.displayInfo();
    z.setName("Lion");
    z.setBirth(2021);
    z.setCagenumber(52);
    z.setWeight(150.25);
    z.setHeight(5);
    z.getBirth();
    z.getAge();
    z.getCagenumber();
    z.getHeight();
    z.getWeight();
    z.getName();
    z.getBirth();
}