#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;

public:
    void get_no()
    {
        cout << "Enter NUMBER 1: ";
        cin >> a;
        cout << "Enter NUMBER 2: ";
        cin >> b;
    }

    void operations()
    {
        cout << "ADDITION: " << (a + b) << endl;
        cout << "SUBTRACTION: " << (a - b) << endl;
        cout << "DIVISION: " << (a / b) << endl;
        cout << "MULTIPLICATION: " << (a * b) << endl;
    }
};

class ScientifiCalculator
{
protected:
    int c;
    int d;

public:
    void sci_get_no()
    {
        cout << "Enter NUMBER 1: ";
        cin >> c;
        cout << "Enter NUMBER 2: ";
        cin >> d;
    }

    void sci_ops()
    {
        cout << "SIN c: " << sin(c) << endl;
        cout << "SIN d: " << sin(d) << endl;
        cout << "COS c: " << cos(c) << endl;
        cout << "COS d: " << cos(d) << endl;
        cout << "LOG10(c): " << log10(c) << endl;
        cout << "LOG10(d): " << log10(d) << endl;
        cout << "POWER(c)^2: " << pow(c, 2) << endl;
        cout << "POWER(d)^2: " << pow(d, 2) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientifiCalculator
{
public:
    // Since both SimpleCalculator and ScientifiCalculator have get_no and operations functions,
    // we don't need to redefine them here unless we want to override their behavior.
};

int main()
{
    HybridCalculator object;

    // Using ScientifiCalculator methods
    object.sci_get_no();
    object.sci_ops();

    // Using SimpleCalculator methods
    object.get_no();
    object.operations();

    return 0;
}
