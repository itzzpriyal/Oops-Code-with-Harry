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
      principal=p;
        time=t;
        rate=r;
       returnvalue=(principal*rate*time)/100;
       cout<< "amount = "<<returnvalue<<endl;
}
  deposit::deposit(int p,int t,double r){  // calculation based on values given by user as paramters for constructor
        principal=p;
        time=t;
        rate=r;
       returnvalue=(principal*rate*time)/100;
       cout<< "amount = "<<returnvalue<<endl;

     }

int main(){ 
   
    int p,t,r;
    float R;
    cout<<"enter principal amount"<<endl;
     cin>>p;
     
     cout<<"enter time"<<endl;
     cin>>t;
     
     cout<<"enter rate"<<endl;
     cin>>r;
     deposit person1(p,t,r);
     cout<<"enter principal amount"<<endl;
     cin>>p;
     
     cout<<"enter time"<<endl;
     cin>>t;
     
     cout<<"enter rate"<<endl;
     cin>>R;
     deposit person2(p,t,R);

return 0;
}