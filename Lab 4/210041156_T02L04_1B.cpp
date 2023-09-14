#include <iostream>
#include <string>

using namespace std;

class Flight
{
private:
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;
    double CalFuel()
    {
        if (distance <= 1000)
        {
            return 500.0;
        }
        else if (distance <= 2000)
        {
            return 1100.0;
        }
        else
        {
            return 2200.0;
        }
    }

public:
    void FeedInfo()
    {
        cout << "Enter Flight Number: ";
        cin >> flightNumber;
        cin.ignore();
        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Distance: ";
        cin >> distance;

        cout << "Enter Max Fuel Capacity: ";
        cin >> maxFuelCapacity;
    }

    

    void ShowInfo()
    {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << endl;
        cout << "Max Fuel Capacity: " << maxFuelCapacity << endl;

        double requiredFuel = CalFuel();
        cout << "Fuel Required: " << requiredFuel << endl;

        if (requiredFuel <= maxFuelCapacity)
        {
            cout << "Fuel Capacity is fit for this flight distance." << endl;
        }
        else
        {
            cout << "Not sufficient Fuel Capacity for this flight." << endl;
        }
    }
};

int main()
{
    Flight flight;
    flight.FeedInfo();
    flight.ShowInfo();
}
