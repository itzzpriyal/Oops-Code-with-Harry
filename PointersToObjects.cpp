#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;//pointer ptr is pointing towards an (object)
    (*ptr).setData(1, 54);//here *ptr means that the obejct its pointing on ,that objects data need to be set
    //(*ptr) is exactly same as (ptr->)
    (*ptr).getData(); //is as good as ptr->
    ptr->getData();

//pointer for array
Complex *ptr_1=new Complex[3];


    return 0;
}
