#include <iostream>
using namespace std;
// ##################################################################################
class student
{
protected:
    int roll_no;

public:
    void get_data(int);
    void print_data();
};
void student::get_data(int z)
{
    roll_no = z;
}
void student::print_data()
{
    cout << "The roll number of the student is : " << roll_no << endl;
}
// ###############################################################################################
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float x, float y)
{
    maths = x;
    physics = y;
}
void Exam::get_marks()
{
    cout << "MATHS marks    : " << maths << endl;
    cout << "PHYSICS marks  : " << physics << endl;
}

// ########################################################################################################
class result : public Exam
{
    float percentage;

public:
    void display()
    {
        print_data(); // from class1
        get_marks();  // from class 2
        cout << " your percentage is : " << (maths + physics) / 2 << "%" << endl;
    }
};

// ###############################################################################

int main()
{
    /*
    Notes:
    if we are inheriting B from A and C from B (A--->B--->C)
1) A=base class for B
2) B=base class for C
3)(A--->B--->C) =INHERITANCE PATH
    */
    result Harry;
    Harry.get_data(23);
    Harry.set_marks(88.9, 91.20);

    Harry.display();

    return 0;
}