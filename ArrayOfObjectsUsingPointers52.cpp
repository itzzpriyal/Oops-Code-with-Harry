#include<iostream>
using namespace std;
class shop{
int id;
float price;
public:
void setdata(int a,int b){
    id=a;
    price=b;
}
void getdata(){
    cout<<"Code of this item is "<<id<<endl;
    cout<<"Price of this item is "<<price<<endl;
}
};
int main(){
    int p,q;
shop *ptr = new shop[4]; // 4 objects/items have been created such that object 1 is pointed by ptr
// n by ptr++ it points object 2 adress n so on
for(int i=0;i<4;i++){
cout<<"enter id of item number "<<i+1<<endl;
cin>>p;
cout<<"enter price of item number "<<i+1<<endl;
cin>>q;
(*ptr).setdata(p,q);
(*ptr).getdata();
ptr++;
}
return 0;
}