#include<iostream>
using namespace std;

class Counter{
    private :
        int count;
        int step;

    public :
        Counter() : count(0), step(1) {}
        void setIncrementStep(int step_value)
        {
            //default value
            step = step_value;
        }
        int getCount()
        {
            //default value
            return count;
        }
        void increment()
        {
            count = count + step;
        }
        void resetCount()
        {
            count = 0;
        }
};

int main()
{
    Counter counter;
    cout << counter.getCount() << endl;
    counter.setIncrementStep(5);
    counter.increment();
    counter.increment();
    cout << counter.getCount() << endl;
    counter.resetCount();
    cout << counter.getCount() << endl;
}