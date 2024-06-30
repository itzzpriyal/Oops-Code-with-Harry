#include<iostream>
using namespace std;
class deposit{
    int principal;
    int time;
    double rate;
    float returnvalue;
    public:
     deposit();//defualt constructor
     deposit(int p,int t,double r);//this contrustor isapplied if the type of parameters match the given object parametrs
     deposit(int p,int t,int r);//this contrustor is applied if the type of parameters match the given object parametrs
     };
deposit::deposit(int p,int t,int r){ // calculation based on values given by user as paramters for constructor
     cout<<"enter principal amount"<<endl;
     cin>>p;
     principal=p;
     cout<<"enter time"<<endl;
     cin>>t;
     time=t;
     cout<<"enter rate"<<endl;
     cin>>r;
     rate=r; 
     returnvalue=(principal*rate*time)/100;
     cout<< "amount = "<<returnvalue<<endl;
}
  deposit::deposit(int p,int t,double r){ //calculation based on parameters provided already
        principal=p;
        time=t;
        rate=r;
       returnvalue=(principal*rate*time)/100;
       cout<< "amount = "<<returnvalue<<endl;

     }

int main(){ 
    deposit person1(2000,4,8); //(int,int,int)
    deposit person2(1000,3,0.3);//(int,int,double)
    

return 0;
}