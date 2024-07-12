#include<iostream>
using namespace std;
template <class T> //whereever we want to use custom data type there we will write "T"
class vector {
    public:
T *arr;
int size;

vector(int m){   //constructor
    size=m;
    arr=new T[size];
}
T dotproduct(vector &v){   //function 
T d=0;
for (int i=0;i<size;i++){
    d=d+arr[i]* ( v.arr[i]);
}
return d;
}
};

int main(){
    //FOR NORMAL USE (WITHOUT TEMPLATE)
    // vector v1(3);  //now if we make this program for float it will not give proper ans therefore we should use template here.
    //  v1.arr[0]=2;
    //  v1.arr[1]=4;
    //  v1.arr[2]=3;
    // vector v2(3);
    //  v2.arr[0]=1;
    //  v2.arr[1]=2;
    //  v2.arr[2]=1;
    // int ans= v1.dotproduct(v2);
    // cout<<"DOTPRODUCT : "<<ans<<endl;
    vector<float> v1(3);  
     v1.arr[0]=2.1;
     v1.arr[1]=4.0;
     v1.arr[2]=3.1;
    vector<double> v2(3);    // dot product of two <float>*<float> ,we can also make <int>*<float>
     v2.arr[0]=1.01;
     v2.arr[1]=2.2;
     v2.arr[2]=1.9;
    float ans= v1.dotproduct(v2);
    cout<<"DOTPRODUCT : "<<ans<<endl;


return 0;
}