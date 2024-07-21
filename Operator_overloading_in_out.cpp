#include<iostream>
using namespace std;
class distance1{
    int feet;
    int inches;
    public:
    distance1(){
        feet=0;
        inches=0;
    }
    
    distance1(int f,int i){
        feet=f;
        inches=i;
    }
    friend ostream &operator<<(ostream &output,const distance1 &obj2){
        output<<"FEET:"<<endl<<obj2.feet<<"INCHES :"<<obj2.inches<<endl;
        return output;
    }
friend istream &operator>>(istream &input,distance1 &obj2){
        input>>obj2.feet>>obj2.inches;
        return input;
    }


};
int main()
{
distance1 d1(1,3),d2(11,2),d3;
cout<<"enter the value of object"<<endl;
cin>>d3;
cout<<"first distance"<<d1<<endl;
cout<<"second distance"<<d2<<endl;
cout<<"third distance"<<d3<<endl;
return 0;
}