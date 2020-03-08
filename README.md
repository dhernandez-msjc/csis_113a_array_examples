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
In this example, we take a look at utilizing vectors instead of arrays.  Notice that we can instantiate a vector with
a starting size.  Vectors are dynamic arrays, so they are arrays underneath the hood.  
<br><br>

### arrays03.cpp
***
In this example we take a moment to look at how we can utilize the modern random number generator, as well as make a 
constant array for storage of titles.  
<br><br>

### arrays04.cpp (coming soon)
***
Code and details coming soon.
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
