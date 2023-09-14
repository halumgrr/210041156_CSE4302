#include<iostream>
using namespace std;

class Calculator
{
    private:
        int value;
    public:
        Calculator()
        {
            value = 0;
        }
        Calculator(int val)
        {
            value = val;
        }
        int getValue()
        {
            return value;
        }
        void setValue(int val)
        {
            value = val;
        }
        void add( int Value )
        {
            value+= Value;
        }
        void subtract( int Value )
        {
            value -= Value;
        }
        void multiply( int Value )
        {
            value *= Value;
        }
        void divideBy( int Value )
        {
            if(Value == 0)
                cout << "Error : divide by 0 is undefined." << endl;
            else
            {
                value /= Value;
            }
        }
        void clear()
        {
            value = 0;
        }
        void display()
        {
            cout << "Calculator display : " << value << endl;
        }
        ~Calculator()
        {
            cout << "Calculator object is destroyed" << endl;
        }

};

int main()
{
    Calculator cal(5);
    cal.add(10);
    cal.display();
    cal.multiply(10);
    cal.display();
    cal.subtract(10);
    cal.display();
    cal.divideBy(0);
    cal.display();
    cal.clear();
    cout << cal.getValue() << endl;
    cal.display();
}