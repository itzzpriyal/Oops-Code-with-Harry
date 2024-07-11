#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

//using member function open(),close(),eof().
//FOR WRITING IN FILE
ofstream obj;
obj.open("PG1.txt");//for opening of file
obj<<"this is a file ."<<endl;
obj<<"hey brooo"<<endl;
obj<<"bye brooo"<<endl;
obj.close();
//FOR READING A FILE 
ifstream obj2;
obj2.open("PG1.txt");//for opening of file
string a;
//now here the issues arises we don"t know how many lines user has typed in so we dont know how many times we have to use getline()
//METHOD 1:
// getline(obj2,a);
// cout<<a;
// getline(obj2,a);
// cout<<endl<<a;
// getline(obj2,a);
// cout<<endl<<a;
// obj2.close();



//therefore another method eof() is used:
cout<<endl<<"eof() is being used "<<endl;
string b;
while(obj2.eof()==0){ //here 0=false
getline(obj2,b);
cout<<b<<endl;
}
return 0;
}