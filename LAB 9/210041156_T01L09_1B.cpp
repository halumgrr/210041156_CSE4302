#include <iostream>
#include <math.h>
using namespace std;

class TwoDimensionalShape
{
private:

protected:
    string color;
    double side_count;

public:
    TwoDimensionalShape(double _count, string _color) : side_count(_count), color(_color) {}
    virtual void shapeDetails() {}
    virtual double calculateArea() { return 0; }
    virtual double calculatePerimeter() { return 0; }
    virtual string getColor() { return ""; }

    /*returning is necessary in non-void return type functions because we might forget to create a
    function definition of the virtual class in any of the child class and then
    the base class one will be used, which must return something as we have a return type*/
};

class Triangle : public TwoDimensionalShape
{
private:
    double side_a;
    double side_b;
    double side_c;

public:
    Triangle(double _a, double _b, double _c, string colr) : TwoDimensionalShape(3, colr), side_a(_a), side_b(_b), side_c(_c) {}

    void shapeDetails()
    {
        cout << "Number of sides: " << side_count << endl;
        cout << "Type: Triangle" << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
        cout << "Color: " << getColor() << endl;
    }

    double calculateArea()
    {
        double P = calculatePerimeter();
        double S = double(P) / 2.0;
        return sqrt(S * (S - side_a) * (S - side_b) * (S - side_c));
    }

    double calculatePerimeter()
    {
        return side_a + side_b + side_c;
    }

    string getColor()
    {
        return color;
    }
};

class Square : public TwoDimensionalShape
{
private:
    double side_a;

public:
    Square(double _a, string colr) : TwoDimensionalShape(4, colr), side_a(_a) {}

    void shapeDetails()
    {
        cout << "Number of sides: " << side_count << endl;
        cout << "Type: Square" << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
        cout << "Color: " << getColor() << endl;
    }

    double calculatePerimeter()
    {
        return 4.0 * side_a;
    }

    double calculateArea()
    {
        return side_a * side_a;
    }

    string getColor()
    {
        return color;
    }
};

class Rectangle : public TwoDimensionalShape
{
private:
    double side_a;
    double side_b;

public:
    Rectangle(double _a, double _b, string colr) : TwoDimensionalShape(4, colr), side_a(_a), side_b(_b) {}

    void shapeDetails()
    {
        cout << "Number of sides: " << side_count << endl;
        cout << "Type: Rectangle" << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
        cout << "Color: " << getColor() << endl;
    }

    double calculatePerimeter()
    {
        return 2.0 * (side_a + side_b);
    }

    double calculateArea()
    {
        return side_a * side_b;
    }

    string getColor()
    {
        return color;
    }
};

class Hexagon : public TwoDimensionalShape
{
private:
    double side_a;

public:
    Hexagon(double _a, string colr) : TwoDimensionalShape(6, colr), side_a(_a) {}

    void shapeDetails()
    {
        cout << "Number of sides: " << side_count << endl;
        cout << "Type: Heaxgon" << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
        cout << "Color: " << getColor() << endl;
    }

    double calculatePerimeter()
    {
        return 6.0 * side_a;
    }

    double calculateArea()
    {
        return (3.0 * sqrt(double(3)) / 2.0) * side_a * side_a;
    }

    string getColor()
    {
        return color;
    }
};

void sortShapePerimeter(TwoDimensionalShape ** shape, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; ++j)
        {
            if(shape[j]->calculatePerimeter() < shape[j+1]->calculatePerimeter())
            {
                swap(shape[j], shape[j+1]);
            }
        }
    }
}

int main()
{
    TwoDimensionalShape *tds[8];
    tds[0] = new Triangle(2.0, 2.0, 3.0, "Red");
    tds[1] = new Triangle(3.0, 3.0, 4.0, "Black");
    tds[2] = new Square(1.0, "White");
    tds[3] = new Square(2.0, "Green");
    tds[4] = new Rectangle(1.0, 2.0, "Purple");
    tds[5] = new Rectangle(2.0, 3.0, "Magenta");
    tds[6] = new Hexagon(3.0, "Grey");
    tds[7] = new Hexagon(5.0, "Black");

    for (int i = 0; i < 8; i++)
    {
        tds[i]->shapeDetails();
        cout << endl;
    }


    cout << endl;
    cout << endl;

    
    sortShapePerimeter(tds, 8);

    for (int i = 0; i < 8; i++)
    {
        tds[i]->shapeDetails();
        cout << endl;
    }
}