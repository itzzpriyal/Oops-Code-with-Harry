/*  
Ambiguity in inheritance can be defined as when one class 
is derived for two or more base classes then there are
 chances that the base classes have functions with the 
 same name. So it will confuse derived class to choose
  from similar name functions. To solve this ambiguity
   scope resolution operator is used “::”. 
*/
#include<iostream>
using namespace std;
class base1{
public:
void greet(){
    cout<<"Namaste"<<endl;
}
};
class base2{
    public:
void greet(){ //same function name as that of base 1 so derived calss will get confused which greet function to call
    cout<<"Bonjour"<<endl;
}
};
class derived:public base1,public base2{
public:
void greet(){   /*if we dont ,mention this then error occurs*/
    base1::greet();// if by chance derived had its own greet function then [derived greet()>base greet()]
}          /*for eg 
class derived:public base1,public base2{
public:
void greet(){
cout<<"konichiwa"<<endl;
}};
OUTPUT :
Namaste
Bonjour
Konichiwa

*/
};
int main(){
     base1 base1obj;
     base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     derived d;
     d.greet(); //wpn't show error in this command now as ambiguity is resolved

return 0;
}