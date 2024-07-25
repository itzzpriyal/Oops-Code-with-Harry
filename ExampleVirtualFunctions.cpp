#include <iostream>
#include <cstring>

using namespace std;
class tmi
{
protected:
    string title;
    float rating;

public:
    tmi(string s, float r)
    {
        title = s;
        rating = r;
    }
 //if we didnt use VIRTUAL KEYWORD THEN (Just coffee. Black - like my soul)will be printed as the pointer is of tmi type
    virtual void display() {
        cout<<"Just coffee. Black - like my soul- clary"<<endl;
    }//as we had made display function virtual therefore the display function of the class to which object belongs will work
};
class tmibones : public tmi
{
    int bookno;

public:
    tmibones(string s, float r, int b_no) : tmi(s, r)
    { // syntax we learnt earlier
        bookno = b_no;
    }
    void display()
    {
        cout << "NAME OF BOOK : " << title << endl;
        cout << "BOOK RATING : " << rating << endl;
        cout << "BOOK NO. : " << bookno << endl;
    }
};
class tmiglass : public tmi
{
    int booklength;

public:
    tmiglass(string s, float r, int b_lenth) : tmi(s, r)
    { // syntax we learnt earlier (i.e)constructor for derived class
        booklength = b_lenth;
    }
    void display()
    {
        cout << "@NAME OF BOOK : " << title << endl;
        cout << "@BOOK RATING : " << rating << endl;
        cout << "@BOOK NO. : " << booklength << endl;
    }
};

int main()
{
    string titlebook;
    float ratingbook;
    int bookno, booklength;
    // for derived class city of bones
    titlebook = "city of bones";
    ratingbook = 5;
    bookno = 1;
    tmibones object_bones(titlebook, ratingbook, bookno);
    // object_bones.display();--------->for directly running display function
    // for derived class city of glass
    titlebook = "city of glass";
    ratingbook = 4.9;
    bookno = 3;
    tmiglass object_glass(titlebook, ratingbook, bookno);
    // object_glass.display();;--------->for directly running display function
    // ###################################
    // METHOD 1:either make two separate pointers

    tmi *ptr;
    ptr = &object_bones;
    ptr->display();
    tmi *ptr2;
    ptr2 = &object_glass;
    ptr2->display();
    cout<<"#######################################################################"<<endl;

    // ####################################
    // METHOD 2:make array of pointers
    tmi *PTR[2];
    PTR[0] = &object_bones;
    PTR[1] = &object_glass;

    PTR[0]->display();
    cout << endl;
    PTR[1]->display();

    return 0;
}
/* 
Rules for virtual functions
@They cannot be static
@They are accessed by object pointers
@Virtual functions can be a friend of another class
@A virtual function in the base class might not be used.
@If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class*/
