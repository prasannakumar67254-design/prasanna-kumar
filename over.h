
#include <iostream>
#include <string>

using namespace std;

class rectangle
{
private:
    double length;
    double width;

public:
    rectangle()
    {
        length = 0;
        width = 0;
        cout << "default constructor" << endl;
    }

    rectangle(double side)
    {
        length = side;
        width = side;
        cout << "square constructor" << endl;
    }

    rectangle(double l, double w)
    {
        length = l;
        width = w;
        cout << "Two-parameter constructor" << endl;
    }

    rectangle(const rectangle &r)
    {
        length = r.length;
        width = r.width;
        cout << "copy constructor" << endl;
    }

    double area()
    {
        return length * width;
    }
};

int main()
{
    rectangle r1;
    cout << "Area of r1: " << r1.area() << endl;

    rectangle r2(5);
    cout << "Area of r2: " << r2.area() << endl;

    rectangle r3(4, 6);
    cout << "Area of r3: " << r3.area() << endl;

    rectangle r4 = r3;
    cout << "Area of r4: " << r4.area() << endl;

    return 0;
}

  