
#include <string>
using namespace std;

    class Address {
    private:
        string house;
        string road;
        string city;
        string zipCode;
        string district;
        string country;

    public:
        Address(string _house, string _road, string _city, string _zipCode, string _district, string _country)
            : house(_house), road(_road), city(_city), zipCode(_zipCode), district(_district), country(_country) {}

        void setHouse(int h) {
            house = h;
        }

        string getHouse() const {
            return house;
        }

        void setRoad(int r) {
            road = r;
        }

        string getRoad() const {
            return road;
        }

        void setCity(int c) {
            city = c;
        }

        string getCity() const {
            return city;
        }

        void setZipCode(int z) {
            zipCode = z;
        }

        string getZipCode() const {
            return zipCode;
        }

        void setDistrict(int d) {
            district = d;
        }

        string getDistrict() const {
            return district;
        }

        void setCountry(int ctry) {
            country = ctry;
        }

        string getCountry() const {
            return country;
        }
    };

    
