#include<iostream>
using namespace std;

//BASE CLASS
class employee{
    int id;
    float salary;
    public:
    employee(){
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"enter salary amount"<<endl;
        cin>>salary;
    }
};
/*
SYNTAX OF WRITING DERIVED CLASS
 class nameOfDerivedClass : visibility-mode base_class_name{
 
  members/methods,functions etc.
  }   
  #########################################################################################
  @ what is visibility mode?

 visibility mode is of two types :private n public
 
1)Default visibility mode is PRIVATE
2)Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3)Private Visibility Mode: Public members of the base class become private members of the derived class
4)Private members are never inherited 
#############################################################################################################                                                */
 //CREATING A DERIVED CLASS OF PROGRAMMER FROM BASE CLASS EMPLOYEE
 class programmer :   employee{
 int code;
 public:
programmer(){
   
 cout<<"type in language code"<<endl;
 cin>>code;
 }};                                

int main(){
    employee JACE,ALEC;
     cout<<"extra details of 3rd employee"<<endl;
    programmer CLARY;

return 0;
}