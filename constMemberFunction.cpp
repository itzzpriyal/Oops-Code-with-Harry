#include<iostream>
using namespace std;
class student{
    int x;
    public:
    student (int a){
        x=a;
    }
    int getdata()const{
        // x++; it doesn't allow us to alter values as we have declared it as const member function
        return x;

    }
};
int main(){
    student object1(100);
    cout<<object1.getdata();

return 0;
}