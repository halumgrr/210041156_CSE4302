#include"task2.h"

int main()
{
    Weight weight1(68.0);
    cout << "Weight 1 in pound-ounce format: ";
    weight1.showWeight();
    cout << "Weight 1 in KG: " << static_cast<double>(weight1) << " KG" << endl;

    
    Weight weight2(150, 8.5);
    cout << "Weight 2 in pound-ounce format: ";
    weight2.showWeight();
    cout << "Weight 2 in KG: " << static_cast<double>(weight2) << " KG" << endl;

}