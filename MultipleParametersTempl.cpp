#include<iostream>
using namespace std;
 
/*
template<class T1, class T2>
class nameOfClass{
    //body
}

 
int main(){
    //body of main
}
*/

template<class T1, class T2> //multiple parameters
class myClass{
    public:
        T1 data1;  // t1=data of int type
        T2 data2;    // t2=data of char type
        myClass(T1 a,T2 b){//(int a,char b)
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<data1<<endl<<data2;
    }
};
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
    return 0;
}


