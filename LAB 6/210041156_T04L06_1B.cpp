#include <iostream>
using namespace std;

class ZooAnimal {
private:
    string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weightData;
    int height;

public:
    ZooAnimal(string name, int birthYear, int cageNumber, float weight, int height)
        : nameOfAnimal(name), birthYear(birthYear), cageNumber(cageNumber), weightData(weight), height(height) {}

    ZooAnimal(int n) : weightData(n) {}

    bool operator>(const ZooAnimal& other) const {
        return weightData > other.weightData;
    }

    bool operator<(const ZooAnimal& other) const {
        return weightData < other.weightData;
    }

    bool operator>=(const ZooAnimal& other) const {
        return weightData >= other.weightData;
    }

    bool operator<=(const ZooAnimal& other) const {
        return weightData <= other.weightData;
    }

    bool operator==(const ZooAnimal& other) const {
        return weightData == other.weightData;
    }

    bool operator!=(const ZooAnimal& other) const {
        return weightData != other.weightData;
    }

    ZooAnimal& operator+=(int value) {
        weightData += value;
        return *this;
    }

    /* Or
    ZooAnimal& operator-=(int value) {
        weightData -= value;
        return *this;
    }
    */
    

    ZooAnimal operator-=(int value) {
        weightData -= value;
        return ZooAnimal(weightData);
    }

    float getWeightData() const {
        return weightData;
    }
};

int main() {
    ZooAnimal lion("Lion", 2015, 1, 150.0, 120);

    cout << "Original weight: " << lion.getWeightData() << " kg" << endl;
    lion += 2;
    cout << "Weight after += 2: " << lion.getWeightData() << " kg" << endl;
    lion -= 2;
    cout << "Weight after -= 2: " << lion.getWeightData() << " kg" << endl;

    return 0;
}
