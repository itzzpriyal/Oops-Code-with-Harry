/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
#include<iostream>
using namespace std;

class base1{
int data1 ;
public:
base1(int value1){
    data1=value1;
    cout<<"base 1 class constructor called"<<endl;
    }
 void print_data1(){
    cout<<"the value of data is "<<data1<<endl;
 }   
};
//####################################################
class base2{
int data2;
public:
base2(int value2){
    data2=value2;
    cout<<"base 2 class constructor called"<<endl;
    }
 void print_data2(){
    cout<<"the value of data is "<<data2<<endl;
 }   

};
//###############################################
class derived:public base1,public base2{ //therefore base 1> base2
int derived1;
int derived2;
public:
 derived(int a,int b,int c,int d):base1(a),base2(b){//syntax // if u change order here doesnt matter it will follow the contructor order based on previous above statement
derived1=c;
derived2=d;
cout<<"derived class constructor called"<<endl;
 }
 void print_DATA(){
    cout<<"the value of derived1 is "<<derived1<<endl;
    cout<<"the value of derived2 is "<<derived2;
 } 
 
};

int main(){
derived object(11,22,33,44);
//as soon as the objects are made ,function is called automnatically
object.print_data1();
object.print_data2();
object.print_DATA();

return 0;
}