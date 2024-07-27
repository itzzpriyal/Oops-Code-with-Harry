#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x;
    int y;
    friend void distance(point ob1,point ob2);
    public:
    point(int, int);
    
    };
    point ::point(int a,int b){
        x=a;
        y=b;
    }
    void distance(point ob1,point ob2){
         cout<<"distance between points="<<sqrt(pow((ob1.x-ob2.x),2)+(pow((ob1.y-ob2.y),2)));

    }

int main(){
    point p(5,9);
    point q(-2,2);
    distance(p,q);


return 0;
}
