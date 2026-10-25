/*

What is Data?
The quantities, characters or symbols on which operations are performed by a computer, which may be stored and transmitted in the form of electrical signals and recorded on magnetic, optical or mechanical recording media.

Example: c = a + b


When data becomes information?

If data is arranged in a systematic way then it gets a structure and become meaningful.

It's not difficult to understand that the data needs to be managed in such a way so that it can produce some meaningful information.

To provide an appropriate way to structure the data, we need to know about DATA STRUCTURE.


What is Data Structure?
A data structure is the systematic way to organize data so that it can be used efficiently.

Example: Arrays

Instead of creating multiple variables of same type. Why not create an array to store all the values.
Storing strings is equivalent of storing an sequence of characters. This requires an array.

*/



/*
    Real Life Examples:

    Did you Know?
    1. Stack data structure is used in implementing redo and undo feature.
    2. Bitmap images are stored as a series of tiny dots called pixels. Here, each pixel is actually a small square that is assigned a color and then arranged in a pattern to form an image.
    3. Storing the friendship information on a social networking site. 


*/



/*
    What is a Data Type?

    Two important things about data types:
    1. Defines a certain domain of values.
    2. Defines operations allowed on those values.

    Example:
    int type
    -> Takes only integer values
    -> Operations: addition, subtraction, multiplication, division, bitwise operations etc.

    float type
    -> Takes only floating point values.
    -> Operations: addition, subtraction, multiplication, division etc (bitwise and % operations are not allowed).




    User Defined Data Types?

    In contrast to primitive data types, there is a concept of user defined data types.

    The operations and values of user defined data types are not specified in the language itself but is specified by the user.

    Example: Structure, union and enumeration.

    By using structures, we are defining our own type by combining other data types.

    struct point{
        int x;
        int y;
    };






    Abstract Data Types (ADT)

    ADT are like user defined data types which defines operations on values using functions without specifying what is there inside the function and how the operations are performed.

    Example: Stack ADT

    A stack consists of elements of same type arranged in a sequential order.

    Operations:
    intialize(), push(), pop(), isEmpty(), isFull()


    Think of ADT as a black box which hides the inner structure and design of the datatype from the user.

    There are multiple way to implement an ADT.

    Example:
    A stack ADT can be implemented using arrays or linked lists.
    
    
    Why ADT?
    The program which uses data structure is called a client program. It has access to the ADT i.e. interface.

    The program which implements the data structure is known as the implementation.


    Advantage
    Let say, if someone wants to use the stack in the program, then he can simply use push and pop operations without knowing its implementation.

    Also, if in future, the implementation of stack is changed from array to linked list, then the client program will work in the same way without being affected.


    Key Difference between Implementation of ADT and Client program

    Role:
    Implementation -> provides the code for ADT operations
    Client Program -> Uses the ADT operations

    Focus:
    Implementation -> How operations are carried out
    Client Program -> what operations are available

    Visibility:
    Implementation -> Knows internal details (arrays, pointers, etc.)
    Client Program -> Sees only the interface (push, pop, etc.)

    Analogy:
    Implementation -> Chef cooking the dish
    Client Program -> Customer eating the dish






    What is a Data Structure?
    A data structure is the organization of the data in a way so that it can be used efficiently.

    In other words, it is used to implement an ADT.

    For example, in order to implement stack ADT, we can use an array data structure or linked list data structure.

    ADT tells us what is to be done and data structures tells us how to do it.


    How to know which data structure to use for a particular ADT?

    Which data structure?
    In reality, different implementations of ADT are compared for time and space efficiency. The one best suited according to the current requirement of the user will be selected.

    Example:
    Stack ADT can be implemented using Arrays, Linked list.



    Advantages of data structures

    Efficiency - proper choice of data structures make program efficient in terms of space and time.

    Reusability - one implementation can be used by multiple client programs.

    Abstraction - Data structure is specified by an ADT which provides a level of abstraction. The client program doesn't have to worry about the implementation details.








    Types of Data Structures

    1. Linear data structures -> A data structure is linear when all the elements are arranged in a linear (sequential) order.
    example: array(pre-defined data structure, linked list, stack, queue

    2. Non Linear data structure -> A data structure is non linear when all the elements are not arranged in a linear (sequential) order.
    There is no linear arrangement of the elements. Example: Tree, graph, heap 


    Linear = simple, ordered, one-dimensional flow.
 	Non-linear = complex, branching, multi-dimensional relationships.




    Even Further Distinction

    Static Data Structure: In these type of data structures, the memory is allocated at compile time. Therefore, maximum size is fixed.

    Advantage: Fast access
    Disadvantage: Slower insertion and deletion

    Example: Array



    Dynamic Data Structure: In these type of data structures, the memory is allocated at run time. Therefore, maximum size is flexible.

    Advantage: Faster insertion and deletion
    Disadvantage: Slower access

    Example: Linked List
*/