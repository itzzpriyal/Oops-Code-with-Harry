/*we have used the “virtual” keyword with the “display” function 
of the base class to make is virtual function so when the display 
function is called by using the base class pointer the display function
 of the derived class will run because the base class pointer is pointing
  to the derived class object.
*/
#include<iostream>
using namespace std;
class baseclass{
public:
int varb=5;
virtual void display(){ //virtual keyword being used (consider it as a weapon which activates the class to which obj belongs  where the pointer is pointing to )
    cout<<"display base class variable "<< varb<<endl;
}
};
class derived : public baseclass{
    public:
    int vard=8;
    void display(){
    cout<<"display derived class variable "<< vard<<endl;
     cout<<"display base class variable "<< varb<<endl;
}
};
int main(){
baseclass *ptr; //will point towards object of base class
baseclass object_base;
derived object_derived;
ptr =&object_derived;/*base class ka pointer is pointing  towards object of derived class.
therefore if we call the display function then the display function of BASE CLASS WILL BE CALLED AND NOT OF DERIVED CLASS 
AS THE POINTER IS OF BASE CLASS.but if we use the virtual keyword then the object towards which the pointer is pointing
irrespective of the type of pointer class ,that function will be called.therefore here DISPLAY function of derived class will be called
*/

ptr->display();//display() of derived is being run

 
  

return 0;
}
