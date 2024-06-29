#include<iostream>
using namespace std;

class construct{
    int a,b;
    public:
    construct(void);//contructor declaration
    void print_num(){
        cout<<"sum is"<<a+b;
    }
    };
    construct::construct(void){
        cout<<"enter a"<<endl;
        cin>>a;
         cout<<"enter b"<<endl;
        cin>>b;
    }
int main(){
    construct object;
    object.print_num();

return 0;
}