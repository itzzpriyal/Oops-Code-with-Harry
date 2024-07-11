#include<iostream>
//ADD LIBRARY FOR FILE HANDLING 
#include <fstream>
/* The useful classes for working with files in C++ are:
1) fstream base class
2) ifstream - (here i stands for input)+derived from fstreambase
3) ofstream - (here o stands for output)+derived from fstreambase
/*
In order to work with files in C++,you will have to open it first. Primarily ,there are two ways to open it
a files:
1)using the member function open() of the class
2)using the constructor */

using namespace std;
int main(){
    string a=" I love you, and I will love you until I die, and if there's a life after that, I'll love you then.  ~Jace ";
cout<<"Opening the file(Cassie.txt) using C++ constructor and writing in it"<<endl;
//######################################################################################################################################################
//TO WRITE IN A FILE
//now make an object of ofstream class
ofstream object1("Cassie.txt");//write operation
object1<<a;
/*eventho we havent made ofstream class still the program is working this because of the inbuilt library <fstream> which we
included in our program */
//###############################################################################################################################################################
//TO READ A FILE
string b;
ifstream object2("CityOfBones.txt");//read operation
//object2>>b;--->we will notice that only "THIS" is printed while rest of the paragraph remains untouched because of the spaces in between words
//therefore use a function , getline(object_name,string in which all the file data you want to store (eg.b))
getline(object2,b);//for 1st line ...keep on repeating getline() for the no of lines u want to read in file
cout<<b;
return 0;
}