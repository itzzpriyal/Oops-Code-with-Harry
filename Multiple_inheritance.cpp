#include<iostream>
using namespace std;
/*
MULTIPLE INHERITANCE:
SYNTAX:
########################################################################
#     class derived:(visibility_mode) base1,(visibility_mode) base2 {} #
#                                                                      #
########################################################################                  
if you have more than 2 bases then also syntax remains same u can 
just edit a comma(,)---> ,(visibility_mode) base3,(visibility_mode) base4 and so on*/

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
// pro_object.base_no1;  ------>will show error as its protected data
// Object.base_no1;   ------>will show error as its  still protected data even after inheritance
    
return 0;
}
