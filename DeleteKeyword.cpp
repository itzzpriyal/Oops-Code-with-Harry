// #include<iostream>
// using namespace std;

// int main(){---------------------->initialises array
  
//     int *arr = new int[3];
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     cout << "The value of arr[0] is " << arr[0] << endl;
//     cout << "The value of arr[1] is " << arr[1] << endl;
//     cout << "The value of arr[2] is " << arr[2] << endl;
   
//     return 0;
// } 
/*output
10
20
30
*/
#include<iostream>
using namespace std;

int main(){
  
    int *arr = new int[3];//doesnt store value 3 but rather declares array of no of rows=3
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;//----> DELETE KEYWORD (therefore all memory allocated or value initaised  will be destroyed n it will print garbage value )
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
