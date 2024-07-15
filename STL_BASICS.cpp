
//LINK FOR STL BASICS
/*    
https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-69/


STL= Containers       +    Algorithms      +           Iterators
        |                        |                         |
 object which           procedure to store           object which points to an element of a container
 stores data                 data 





###########################################################################################
https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-70/
##########################################################################################
 Containers are of three types
 1)SEQUENCE CONTAINERS  ->  stores data in linear fashion
                            Sequence containers include(( Vector, List, Dequeue etc.) These are some of the most used sequence containers.
 2)ASSOCIATIVE  CONTAINERS ->direct access  ->They store their data in a tree-like structure
                            set/multiset,map/multimap
 3)DERIVED  CONTAINERS  -> As the name suggests, these containers are derived from either the sequence or the associative containers. They often provide you with some better methods to deal with your data.
                        real world modelling
                         stack(lifo=last in first out)(consider it as some pop up box with no on top of each other
                         ,queue(fifo=first in is first out),priority-queue

#################################################
In sequence containers, we have Vectors, which has following properties:

>Faster random access to elements in comparison to array
>Slower insertion and deletion at some random position, except at the end.
>Faster insertion at the end.
 

In Lists, we have,

>Random accessing elements is too slow, because every element is traversed using pointers.
>Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated.
  
  In associative containers, every operation except random access is faster in comparison to any other containers, be it inserting or deleting any element.
  (as it stores data in tree type struc)
  */