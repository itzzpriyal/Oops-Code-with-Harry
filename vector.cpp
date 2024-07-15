//vectors are just like array  ,only difference we can change the size of vector unlike array
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
    display(vector1);
 vector1.pop_back();//This method of vectors, deletes the last element of the vector.
 cout<<endl;
  display(vector1);
return 0;
}