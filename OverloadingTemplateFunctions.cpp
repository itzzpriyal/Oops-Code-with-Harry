#include <iostream>
using namespace std;
void func(int a)
{ // function which only takes int value
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{ // templatised func which can take any data type
    cout << "I am templatised func() " << a << endl;
}
int main()
{
    func(4);   //"i am first func()"will be printed as->Exact match takes the highest priority (as the no passed is (int ) only
    func('c'); // templatised function will be called

    return 0;
}