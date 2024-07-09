// RUN TIME POLYMORPHISM (as at the time of run,we come to know which display function will get used)
#include<iostream>
using namespace std;
class baseclass{
public:
int varb;
void display(){
    cout<<"display base class variable "<< varb<<endl;
}
};
class derived : public baseclass{
    public:
    int vard;
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
AS THE POINTER IS OF BASE CLASS.
*/
(*ptr).display();//ptr is pointing towards obj of derived class but ptr is of base class therefore it binded the function to that class i.e base class
ptr->display();
//  ptr->vard=9; will throw an error as base class ptr is trying to access derived class property
 //#####################################################
  derived *ptr2 ; 
  ptr2=&object_derived;  
  cout<<endl;
  ptr2->display(); 

return 0;
}