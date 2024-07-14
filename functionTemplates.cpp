#include<iostream>
using namespace std;
 //NORMAL FUNCTION
// float funcAverage(int a, float b){
//     float avg= (a+b)/2.0; 
//     return avg;
// }
// int main(){
//     float a;
//     a = funcAverage(5,2.0);
//     printf("The average of these numbers is %f",a);
//     return 0;
// }
template <class t1,class t2>  //function in template 
float funcAverage(t1 a, t2 b){ //  t1 and t2 can be any data type 
    float avg= (a+b)/2.0; 
    return avg;
}
template <class t>
void swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;
}

int main(){
float a;
a=funcAverage('c',4.5); //converted c into ascii value we dont have to type in data type ,it manages it by itself
cout<<"avg = "<<a <<endl;
int x=2,y=3;
cout<<"before swapping : "<<x<<" and "<<y<<endl;
swapp(x,y);
cout<<"swapped values : "<<x<<" and "<<y<<endl;

return 0;
}
