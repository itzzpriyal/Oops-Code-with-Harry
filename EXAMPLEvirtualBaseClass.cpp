#include<iostream>
using namespace std;
/*           (virt_base_class)
  test <---------(STUDENT-)--------->sports
     |                               |
     |                               |
     ---------->RESULT<---------------
       
*/
class student{
    protected:
    int roll_no;
    public:
    void set_num(){
        cout<<"Type in the roll number"<<endl;
        cin>>roll_no;
    }
    void print_num(){
        cout<<"ROLL NUMBER : "<<roll_no<<endl;
    }
};
//######################################################
class test :virtual public student{
protected:
float maths,physics;
public:
void set_marks(float x,float y){
maths=x;
physics=y;
}
void print_marks(){
    cout<<"result is out"<<endl;
    cout<<"maths marks: "<<maths<<endl;
    cout<<"physics marks :"<<physics<<endl;
}
};
//#####################################################
class sports :virtual public student{
protected:
float score;
public:
void set_score(){
    cout<<"type in score :"<<endl;
    cin>>score;
}
void print_score(){
    cout<<"score = "<<score<<endl;
}
};
//#####################################################
class result : public test,public sports{
private:
float total;
public:
void display(){
    total=maths+physics+score;
    print_num();
    print_marks();
    print_score();
    cout<<"your total score is : "<<total<<endl;

}
};
int main(){
result object;
object.set_num();
object.set_marks(88,90);
object.set_score();
object.display();



return 0;
}