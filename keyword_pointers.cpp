// #include<iostream>
// using namespace std;

// int main(){
//     
//     int a = 4;           ------->// Basic Example
//     int* ptr = &a;
//     cout<<"The value of a is "<<*(ptr)<<endl;
  
//     return 0;
//     }


 #include<iostream>
using namespace std;

int main(){
    //NEW KEYWORD
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    
    return 0;
}
