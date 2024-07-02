#include<iostream>
using namespace std;
int count=0;//GLOBAL VARIABLE
/*never takes any argument nor does it return any value
//DESTRUCTORS MAIN USE IS TO FREE THE DYNAMIC MEMORY BEING ALLOCATED TO OBJECTS AS SOON AS THEIR SCOPE FINISHES
destructors are used to destroy the memory which was being used by the object*/

class num{
    public:
    num(){
    count++;
    cout<<"Constructor is being called for object no."<<count<<endl;
    }
    ~num(){
        cout<<"destructor is being called for object no."<<count<<endl;
     count--;
    }
};
int main(){
    cout<<"Entering main block"<<endl;
    cout<<"creating first object"<<endl;
    num object1;
    {//creating another block such that the scope of objects remain created here ,remain here only n once it reaches the end of block
    //it gets destroyed.
    cout<<"Enterning a new block"<<endl;
    cout<<"creating two more new objects"<<endl;
    num object2,object3;
    cout<<"end of block 2"<<endl;
     }
     cout<<"end of main block"<<endl;
return 0;
}
