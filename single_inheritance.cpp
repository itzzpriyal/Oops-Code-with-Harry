#include<iostream>
using namespace std;
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}
//Class is being derived publically
class Derived : public Base /*if it was called in private mode then in main we can't
call set_data(); directly */
 
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();//as data1 is private n not inheritable therefore we need to access it by function 
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}
