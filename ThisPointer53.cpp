#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setdata(int a){
       this->a=a;
    }
    void getdata(){
        cout<<"value of number = "<<a;
    }
};
int main(){
A object;
object.setdata(5);
object.getdata();
return 0;
}
  
  /*
  OUTPUT:
  it gives out garbage value as we passed (int a)--->a=a
  */