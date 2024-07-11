#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //connecting our file PG.tst with obj stream in order to write
    ofstream obj("PG1.txt");
    cout<<"Enter your name"<<endl;
    // creating a name string variable and filling it with string entered by the user
    string a;
    cin>>a;
    obj<<"My name is "+ a;
    obj.close();//file closed that means the link b/w prog and file is broken
    //now suppose we want to read what was there in that file then;
    ifstream obj2("PG1.txt");
    string b;
    getline(obj2,b);
    cout<<"the content of this file is : "<<endl<<b;
    obj2.close();

return 0;
}