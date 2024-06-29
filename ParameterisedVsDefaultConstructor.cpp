//default constructor(gets called as soon as an object is declared)

// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//     complex(void);
// };
// complex::complex(void){
//     cout<<"enter first no."<<endl;
//     cin>>a;
//      cout<<"enter second no."<<endl;
//     cin>>b;
//     cout<<"the sum of both no.s is"<<a+b<<endl;
// }
// int main(){
//     complex object_1;

// return 0;
// } 

//PARAMETRISED CONSTRUCTOR
#include<iostream>
using namespace std;
class complex{
    int a; 
    int b;
    public:
    complex(int,int);//parameterised constructor

};
complex::complex(int x,int y){
    a=x;
    b=y;
    cout<<"values of a and b are "<<a<<","<<b<<endl;

}
int main(){
complex object1(2,3);//implicit call ,object namecan be anything a,b,x,y etc

complex object2=complex(5,6); //explicit call

return 0;
}