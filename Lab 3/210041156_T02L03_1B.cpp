#include<iostream>
using namespace std;

class RationalNumber
{
    private : 
        int p;
        int q;

    public :
        RationalNumber() : p(1), q(1){}
        void assign(int numerator, int denominator)
        {
            if(denominator == 0)
            {
                cout << "Error storing value" << endl;
                return;
            }
            else
            {
                p = numerator;
                q = denominator;
            }
        }

        double convert()
        {
            double value;
            value = (double)p/(double)q;
            return value;
        }

        void invert()
        {
            if(p == 0)
            {
                cout << "Error : defined inverted value" << endl;
            }
            else
            {
                int temp;
                temp = p;
                p = q;
                q = temp;
            }
        }

        void print()
        {
            cout << "The Rational Number is " << p << "/" << q << endl;
        }
};

int main()
{
    RationalNumber number;
    int a, b;
    number.print();
    number.assign(100, 300);
    number.print();
    cout << number.convert() << endl;
    number.invert();
    number.print();
}