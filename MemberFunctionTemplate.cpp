#include<iostream>
using namespace std;
template <class  T>
class student{
    public:
T data;
student(T a){
    data=a;
}
  //or we can make function  
  void display();//you can declare it inside the class too but here we will learn how to declare it outside class

};
template<class T>
void student <T>::display(){
    cout <<"data : "<<data<<endl;
}

int main(){
    student<int> object(4);
    object.display();
    return 0;
}

