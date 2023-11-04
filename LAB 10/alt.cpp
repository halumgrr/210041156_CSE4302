#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    Product(const string& title, const string& authorOrDirector, int id)
        : title(title), authorOrDirector(authorOrDirector), id(id) {
        totalProductsCreated++;
    }

    virtual ~Product() {}

    virtual void displayInfo() const = 0;

    static int getTotalProductsCreated() {
        return totalProductsCreated;
    }

    int getId() const {
        return id;
    }

    bool operator<(const Product& other) const {
        return id < other.id;
    }

protected:
    string title;
    string authorOrDirector;
    int id;

    static int totalProductsCreated;
};

int Product::totalProductsCreated = 0;

class Book : public Product {
public:
    Book(const string& title, const string& author, int id)
        : Product(title, author, id) {}

    void displayInfo() const override {
        cout << "Book ID: " << getId() << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << authorOrDirector << endl;
    }
};

class DVD : public Product {
public:
    DVD(const string& title, const string& director, int id)
        : Product(title, director, id) {}

    void displayInfo() const override {
        cout << "DVD ID: " << getId() << endl;
        cout << "Title: " << title << endl;
        cout << "Director: " << authorOrDirector << endl;
    }
};

int main() {
    Book book1("Book Title 1", "Author 1", 1);
    Book book2("Book Title 2", "Author 2", 2);
    DVD dvd1("DVD Title 1", "Director 1", 3);
    DVD dvd2("DVD Title 2", "Director 2", 4);
    DVD dvd3("DVD Title 3", "Director 3", 5);

    cout << "Total number of products created: " << Product::getTotalProductsCreated() << endl;

    cout << "Comparing products by their IDs:" << endl;
    if (book1 < dvd1) {
        cout << "Book 1 has a lower ID than DVD 1" << endl;
    } else {
        cout << "DVD 1 has a lower ID than Book 1" << endl;
    }

    cout << "Product information:" << endl;
    book1.displayInfo();
    book2.displayInfo();
    dvd1.displayInfo();
    dvd2.displayInfo();
    dvd3.displayInfo();

    return 0;
}
