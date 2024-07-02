/*1)Reusability is a very important feature of oops
 2) in C ++ we can reuse a class and add additional features to it
 3)resuing classes saves time and money
 4)resuing already tested and debugged class will save a lot of effort of developing 
 and debugging the same thing again n again
 #################################################################################################
 /*
 #So consider a class:             #now consider we have 1 more class
                                  of coders which also requires
                                  the same data,membrs,functions as that of 
                                  employee class


 class employee{                  class coders{
  // ehich stores 
         name;                     name;
         age;                      age;
         dob;                      dob;
                                  
  }                                      }
 
 ###THEREFORE IF WE MAKE CHANGE AT ONE PLACE THEN AT ALL PLACES 
 IT GETS CHANGED,THUS SAVING TIME.
 ### THEREFORE ALL OF THIS CAN BE DONE BY INHERITANCE RATHER THAN 
    REPEATING SAME SET OF INFORMATION.

 #########################################################################################################

What is Inheritance in C++?

1)The concept of reusability in C++ is supported using inheritance
2)We can reuse the properties of an existing class by inheriting it
3)The existing class is called a BASE CLASS.
4)The new class which is inherited from the base class is called a DERIVED CLASS.
5)Reusing classes saves time and money
There are different types of inheritance in C++
#########################################################################################################
Forms of Inheritance in C++

Single Inheritance
Multiple Inheritance
Hierarchical Inheritance
Multilevel Inheritance
Hybrid Inheritance

########################################################################################################
 1)Single Inheritance in C++

Single inheritance is a type of inheritance in which a derived class
 is inherited with only one base class. For example,
  we have two classes “employee” and “programmer”. 
  If the “programmer” class is inherited from the “employee” class
   which means that the “programmer” class can now implement the functionalities 
   of the “employee” class.

M2)ultiple Inheritances in C++

 Multiple inheritances are a type of inheritance in which one derived class
  is inherited with more than one base class. 
  For example, we have three classes “employee”, “assistant” and “programmer”. 
  If the “programmer” class is inherited from the “employee” and “assistant” class
   which means that the “programmer” class can now implement the functionalities of
    the “employee” and “assistant” class.
 
 3)Hierarchical Inheritance

A hierarchical inheritance is a type of inheritance in which 
several derived classes are inherited from a single base class. 
For example, we have three classes “employee”, “manager” and “programmer”. 
If the “programmer” and “manager” classes are inherited from the “employee” class
 which means that the “programmer” and
 “manager” class can now implement the functionalities of the “employee” class.
 
 4)Multilevel Inheritance in C++

Multilevel inheritance is a type of inheritance in which one derived class 
is inherited from another derived class. For example, we have three classes 
“animal”, “mammal” and “cow”. If the “mammal” class is inherited from the 
“animal” class and “cow” class is inherited from “mammal” which means that the
 “mammal” class can now implement the functionalities of “animal” and “cow” 
class can now implement the functionalities of “mammal” class.
 
 5)Hybrid Inheritance in C++

Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance. 
In hybrid inheritance, a class is derived from two classes as in multiple inheritances.
 However, one of the parent classes is not a base class. For example, we have four classes
  “animal”, “mammal”, “bird”, and “bat”. If “mammal”  and “bird” classes are inherited from
   the “animal” class and “bat” class is inherited from “mammal” and “bird” classes which means 
   that “mammal” and “bird” classes can now implement the functionalities of “animal” class and
    “bat” class can now implement the functionalities of “mammal” and “bird” classes.
 */
