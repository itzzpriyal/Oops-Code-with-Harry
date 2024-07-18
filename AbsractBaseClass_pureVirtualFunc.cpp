/*Pure virtual function is a function that doesn’t perform any operation and the function is declared
 by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.
 ##############################################################################################
 syntax:

 class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0; //doesn't run   <<<----------------------syntax(pure virtual func)
};
###############################################################################################
ABSTRACT BASE CLASS ->is basically that class ,from which other classes get derived n the main functionality of prog lies in those derived classes

Abstract base class is a class that has at least one pure virtual function in its body.
The classes which are inheriting the base class must need to override the virtual function
of the abstract class otherwise compiler will throw an error.
 
 
 
 
 
 
 
n */
