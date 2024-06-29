#include<iostream>
using namespace std;
class C2;
class C1{
    int data1;
    friend void swap(C1 &,C2 &);
    public:
    void set_data(int value1){
        data1=value1;
    }
    void print_data(){
        cout<<data1;
    }
};
class C2{
    int data2;
     friend void swap(C1 &,C2 &);
    public:
    void set_data(int value2){
        data2=value2;
    }
    void print_data(){
        cout<<data2;
    }
};
void swap(C1 &o1,C2 &o2){
    int temp;
    temp=o1.data1;
    o1.data1=o2.data2;
    o2.data2=temp;
}
int main(){
    cout<<"before swapping"<<endl;
    C1 object1;
    object1.set_data(3);
    object1.print_data();
    cout<<"and";
    C2 object2;
    object2.set_data(2);
    object2.print_data();
    cout<<endl;
    cout<<"after swapping"<<endl;
    swap(object1,object2);
    object1.print_data();
    cout<<"and";
    object2.print_data();


return 0;
}