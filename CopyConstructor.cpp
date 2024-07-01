#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=2;
    } //default constructor
    number(int value){  
     a=value;
    }
    //copy constructor : if object is passed in a constructor such that its value gets saved
    // as copy in another object.
    number(number &obj){ //reference of  object
        cout<<"this is a copy constructor"<<endl;
        a = obj.a; //y.a
        
    }
    void display(){
        cout<<"value :"<<a<<endl;
    }

};
int main(){
    number x,y,z(4);
    x.display();
    y.display();
    z.display();
    number z_copy(y);//copy of object y
    z_copy.display();





return 0;
}