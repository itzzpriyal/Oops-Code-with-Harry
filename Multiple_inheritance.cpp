#include<iostream>
using namespace std;
/*
MULTIPLE INHERITANCE:
SYNTAX:
########################################################################
#     class derived:(visibility_mode) base1,(visibility_mode) base2 {} #
#                                                                      #
########################################################################                  */
class base1{
    protected:
    int base_no1;
    public:
    void base1_get(){
        cout<<"type in number from base 1"<<endl;
        cin>>base_no1;
    }
   
};
//########################################################################
class base2{
    protected:
    int base_no2;
    public:
    void base2_get(){
        cout<<"type in number from base 1"<<endl;
        cin>>base_no2;
    }
    
};
//#########################################################################

class derived:public base1,public base2{

public:
void show(){
cout<<"BASE 1 : "<<base_no1<<"BASE 2 : "<<base_no2<<endl;
cout<<"SUM : "<<base_no1+base_no2<<endl;
}

};

int main(){
derived Object;
Object.base1_get();
Object.base2_get();
Object.show();
return 0;
}