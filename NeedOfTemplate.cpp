/* What is a template in C++ programming?
 Declaring classes for every other data type(which if counted is way too much) in the very first place violates the DRY( Don’t Repeat Yourself)
  rule of programming and on the other doesn't completely utilise the potential of C++.

 It is very analogous to when we said classes are the templates for objects,
  here templates itself are the templates of the classes.
   That is, what classes are for objects, templates are for classes.

Why templates?

1)DRY Rule:
To understand the reason behind using templates, we will have to understand the effort behind declaring classes for different data types. 
Suppose we want to have a vector for each of the three(can be more) data types, int, float and char. Then we’ll obviously write the whole
 thing again and again making it awfully difficult. This is where the saviour comes, the templates. It helps parametrizing the data type 
 and declaring it once in the source code suffice. Very similar to what we do in functions. It is because of this, also called, ‘parameterized classes’.

2)Generic Programming:
It is called generic, because it is sufficient to declare a template once, it becomes general and it works all along for all the data types.
We had to copy the same thing again and again for different data types, but a template solves it all.
##############################################################################################################################################
      #include <iostream>
using namespace std;
 
template <class T>                             T---->(T can be any datatype int,float,char)
class vector {
    T *arr;
    int size;
    public:
        vector(T* arr)[
            //code
        ]
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}

###################################################################################################################################################
*/
#include<iostream>
using namespace std;
class vector {
    public:
int *arr;
int size;

vector(int m){   //constructor
    size=m;
    arr=new int[size];
}
int dotproduct(vector &v){   //function 
int d=0;
for (int i=0;i<size;i++){
    d=d+arr[i]* ( v.arr[i]);
}
return d;
}
};

int main(){
    vector v1(3);
     v1.arr[0]=2;
     v1.arr[1]=4;
     v1.arr[2]=3;
    vector v2(3);
     v2.arr[0]=1;
     v2.arr[1]=2;
     v2.arr[2]=1;
    int ans= v1.dotproduct(v2);
    cout<<"DOTPRODUCT : "<<ans<<endl;

return 0;
}