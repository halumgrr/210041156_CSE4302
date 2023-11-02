#include <iostream>
using namespace std;

class Student
{
private:
    static int count;
    string name;
    int age;
    float gpa;

public:
    Student()
    {
        count++;
    }

    Student(string _name, int _age, float _gpa) : name(_name), age(_age), gpa(_gpa)
    {
        count++;
    }

    ~Student() {}

    void display() const
    {
        cout << "Name:" << name;
        cout << " Age:" << age;
        cout << " Gpa:" << gpa << endl;
        cout << endl;
    }

    void setStudent()
    {
        cout << "Enter Name:" << endl;
        cin >> name;
        cout << "Enter Age:" << endl;
        cin >> age;
        cout << "Enter Gpa:" << endl;
        cin >> gpa;
    }

    bool operator<(const Student &other) const
    {
        return gpa < other.gpa;
    }

    float getGpa() const
    {
        return gpa;
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    static float getCount()
    {
        return count;
    }
};

class GradeConverter
{
private:
    const float conv;
    string name;
    int age;
    float gpa;

public:
    GradeConverter() : conv(.5) {}

    GradeConverter(string _name, int _age, float _gpa) : name(_name), age(_age), gpa(_gpa), conv(.5) {}

    GradeConverter(Student s) : conv(.5)
    {
        string n = s.getName();
        int a = s.getAge();
        float f = s.getGpa()/conv;
        GradeConverter(n, a, f);
    }

    void display() const
    {
        cout << "Name:" << name;
        cout << " Age:" << age;
        cout << " Gpa:" << gpa << endl;
        cout << endl;
    }

    void setStudent()
    {
        cout << "Enter Name:" << endl;
        cin >> name;
        cout << "Enter Age:" << endl;
        cin >> age;
        cout << "Enter Gpa:" << endl;
        cin >> gpa;
    }

    ~GradeConverter() {}
};

int Student ::count = 0;

int main()
{
    Student student[5];
    for (int i = 0; i < 5; ++i)
    {
        student[i].setStudent();
    }

    for (int i = 0; i < 5; ++i)
    {
        student[i].display();
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = i; j < 4; ++j)
        {
            if (student[j] < student[j + 1])
            {
                swap(student[j], student[j + 1]);
            }
        }
    }

    for (int i = 0; i < 5; ++i)
    {
        student[i].display();
    }

    Student s1;
    Student s2("k", 6, 3.6);
    cout << Student::getCount() << endl;

    GradeConverter g1 = s2;
}