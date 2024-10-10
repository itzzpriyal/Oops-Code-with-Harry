#include<iostream>
using namespace std;
class base{
    public:
    void hello(){
        cout<<"hello"<<endl;
    }
};
class derived:public base{
    public:
    void hello(){
        cout<<"namaste"<<endl;
    }
};
int main(){
base *b1=new base();
base *b2=new derived();
// derived *d1=new base();
derived*d2=new derived();
b1->hello();
b2->hello();
d2->hello();
return 0;
}