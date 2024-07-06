/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;*/
#include<iostream>
using namespace std;

class Test
{
    int a; //a is declared first here that is why pt 5 shows error
    int b;

public:
    Test(int i, int j) : a(i), b(j) /* meaning of this : a=i and b=j */
    // 1)Test(int i, int j) : a(i), b(j)------>no error
    // 2)Test(int i, int j) : a(i), b(i+j)------>no error
    // 3)Test(int i, int j) : a(i), b(2*j)------>no error
    // 4)Test(int i, int j) : a(i), b(a+j)------>no error
    // 5)Test(int i, int j) : b(j), a(b+i) --->shows error as we have declared (a) first
    // therefore it gets initialised first therefore it doesn't know what is the value of b
   
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
