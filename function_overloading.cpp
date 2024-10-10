#include<iostream>
using namespace std;
class hello{
    public: 
void add(int a,int b){
    cout<<"both the terms which are added are integer type  "<<a+b<<endl;

}

void add(double a,double b){
   
    cout<<"both the terms which are added are float type  "<<a+b<<endl;
   
}

void add(char a,char b){
    
    cout<<"both the terms which are added are char type  "<<a+b<<endl;
   
}
};
int main(){
    //based on arguments passed the function is called
hello object;
object.add(2,5);
object.add(2.45,5.67);
object.add('a','b');
// object.add(2.45,5); ----->shows error

return 0;
}
