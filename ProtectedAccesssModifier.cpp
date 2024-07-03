/*Protected access modifiers : are similar to the private access modifiers 
but protected access modifiers can be accessed in the derived class
 whereas private access modifiers cannot be accessed in the derived class. 
 A table is shown below which shows the behavior of access modifiers when
  they are derived “public”, “private”, and “protected”.
  ######################################################################
  in simpler language;protected variabel can be inherited my derived class unlike private variable of
  base class.
*/
#include<iostream>
using namespace std;
class base{       /*suppose we want to keep data private such that it can not be accessed 
                  from outside but not that much priavte .we want that its data can be inherited by derived 
                   class then we use protected mode*/
 protected:
 int a;
 private:
 int b;
};
/* (members of base         Public Mode      	       Private Mode 	            Protected Mode
    class)

Private members           	Not Inherited              	Not Inherited              	Not Inherited              
Protected members           Protected                   Private                     Protected                    
Public members           	Public	                    Private                     Protected                    
*/
class derived: public base{
};
int main(){
    base object;
    derived d_object;
    // cout<<object.a ----> gives arror as it can only be herited but it still acts as private
    // cout<<d_object.a; ----> gives arror as its still private
    //therefore we need a function to access protected data


return 0;
}
