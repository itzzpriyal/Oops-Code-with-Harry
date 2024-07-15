//c++.com = very helpful pg for learning stl functions
#include<iostream>
#include<vector>
using namespace std;
void display(vector<float> &v){
     for(int i=0;i<v.size();i++){ //size= another STL adv
      cout<<v[i]<<"  ";
}}
int main(){
    //vector<datatype>vetor_name;
    vector<float>vector1;
     int num,a;
    cout<<"ENTER THE NO.OF ELEMENTS YOU WANT TO ADD"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"enter the number"<<endl;
        cin>>a;
        vector1.push_back(a);//inbuilt library function (STL advantages) ->Vectors have a method, push_back(), to insert elements in it from the rear end.
    }
    cout<<endl;
    display(vector1);
    cout<<endl;
    //TO INSERT NUMBER:
    //#############################################################################################################################################
vector<float>::iterator iter1=vector1.begin();//iterator starts pointing from the first element n by default introduces 45 at the start
 vector1.insert(iter1,45);//iter=iterator made by the user
 //################################################################################################################################################
  display(vector1);
  cout<<endl;
  vector<float>::iterator iter2=vector1.begin();
  vector1.insert(iter2+2,100); //to insert 100 after starting 2 digits
   display(vector1);
   //NOW IF WE WANT TO INSERT 5 COPIES OF 45 THEN INSTEAD OF MAKING 5 ITERATORS WE WILL JUST USE SYNTAX
   //vector1.insert(iter1,5,45);
return 0;
}