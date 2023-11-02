#include <iostream>
#include <algorithm>

using namespace std;

class Counter {
private:
    int count;
    int incrementStep;

public:
    Counter() : count(0), incrementStep(1) {}

    Counter(int ct, int stp) : count(ct), incrementStep(stp) {}

    Counter(int c) : count(c) {}

    void setIncrementStep(int step_val) {
        if (step_val > 0) {
            incrementStep = step_val;
        }
    }

    int getCount() const {
        return count;
    }

    void increment() {
        count += incrementStep;
    }

    void resetCount() {
        count = 0;
    }

    Counter operator +(const Counter& other) const{
        int c = count + other.count;
        int s = max(incrementStep, other.incrementStep);
        return Counter(c, s);
    }

    bool operator >(const Counter& other) const {
        return count > other.count;
    }

    bool operator <(const Counter& other) const {
        return count < other.count;
    }

    bool operator >=(const Counter& other) const {
        return count >= other.count;
    }

    bool operator <=(const Counter& other) const {
        return count <= other.count;
    }

    bool operator ==(const Counter& other) const {
        return count == other.count;
    }

    bool operator !=(const Counter& other) const {
        return count != other.count;
    }

    Counter operator ++(int) {
        return Counter(count++); 
    }

    Counter operator ++() {
        return Counter(++count);
    }

    friend void testFunction(const Counter& c);
};

void testFunction(const Counter& c) {
    cout << c.getCount();
}

int main() {
    Counter c1, c2, c3;
    c2.setIncrementStep(3);
    c3.setIncrementStep(5);

    c2.increment();
    c3.increment();

    c1 = c2 + c3;

    cout << c1.getCount() << endl;

    bool equal = (c1 == c2);
    cout << equal << endl;
    

    cout << c2.getCount() << endl;

    Counter c4 = c2++;

    cout << c2.getCount() << endl;
    
    cout << c4.getCount() << endl;

    Counter c5 = ++c2;

    cout << c5.getCount() << endl;

    testFunction(c1);

    return 0;
}
