## CSIS 113A: Examples of Arrays and Vectors
In this repository are several of examples of how we can declare, initialize and utilize arrays in our projects.  It is 
important to remember that it takes practice to get the hang of some of the algorithms.  I encourage you to walk through 
the examples and see what sparks up questions to bring up during lecture. 

###### David C Hernandez, MSW, MBA <br>Associate Faculty, CSIS <br>Mt San Jacinto College
<br>

### arrays01.cpp
***
In this example, we look at the way to create simple arrays using bracket notation.  Notice that we utilize a similar 
pattern of declaration, so in order for the compiler to make sense of the difference between a regular variable and an 
array variable, the  **[]** is needed to delineate the difference.  

``` c++
// declaring regular variables
int number;
string name;

// array declarations need to have constants
const int ARRAY_SIZE = 5;

// declaring arrays, with size of 5
int numbers[ARRAY_SIZE];
string names[ARRAY_SIZE];

```

Also notice that initialization can be done at time of declaration, or at later if desired.  The text mentions that
vectors are preferred over regular arrays due to safety.  Vectors will check out of bounds for instance. 
<br><br>

### arrays02.cpp
***
In this example we take a look at the modern array found in c++ through the array class.  In order to utilize this, we
must include the array in the preprocessor directives. 
```c++
#include <array>
// we still must supply the size of the array
array<int, SIZE> nameOfArray;

// you can set a small predefined array as well
array<int, SIZE> nameOfArray {1, 2, 3, ...};
```
 
<br><br>

### arrays03.cpp
***
In this example we take a look at the vector object and how it can be used similarly as c-style, and regular arrays in
c++.  Vectors are going to be your main go to, but it is important to remember that the other two ways exist.  When a 
problem calls for a smaller and set domain of values, meaning, no additional space is needed, then reach for the array
class.  
<br><br>

### arrays04.cpp
***
In this example, we take a look at utilizing vectors instead of arrays.  Notice that we can instantiate a vector with
a starting size.  Vectors are dynamic arrays, so they are arrays underneath the hood.  
<br><br>

### arrays05.cpp
***
In this example we take a moment to look at how we can utilize the modern random number generator, as well as make a 
constant array for storage of titles.  
<br><br>

### arrays06.cpp
***
Illustration of some basic algorithms with vectors
<br><br>

### arrays07.cpp
***
Illustration of some basic algorithms with vectors
<br><br>

### magicEightBall.cpp
***
Simple Magic Eight-ball program.  Program allows user to enter a question, program generates a random number to decide
what statement to output. This program utilizes the modern random generator (C++11), and vector to hold the list of
messages.
<br><br>

> magicEightBallFunctions.hpp
***
Contains function prototypes for use in the program. 
* clearConsole()
* clearInputStream()
* pauseConsole()
<br><br>

> magicEightBallFunctions.cpp
***
Contains functions definitions. 
<br><br>
