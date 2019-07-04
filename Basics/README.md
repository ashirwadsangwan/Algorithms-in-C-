# INTRODUCTION

### Getting Started with Data
C++ considers data to be the focal point of the problem-solving process. C++ supports the object-oriented programming paradigm. In C++, as well as in any other object-oriented programming language, we define a `class` to be a description of what the data look like (the state) and what the data can do (the behavior). Classes are analogous to abstract data types because a user of a class only sees the state and behavior of a data item. Data items are called objects in the object-oriented paradigm. An object is an instance of a class.

### Built-in Data Types
C++ requires the users specify the specific data type of each variable before it is used. The primary C++ built-in atomic data types are: integer (`int`), floating point (`float`), double precision floating point (`double`), Boolean (`bool`), and character (`char`). There is also a special type which holds a memory location called pointer. C++ also has collection or compound data types, which will be discussed in a future chapter.

### Boolean Data
Boolean data types are named after George Boole who was an English mathematician, so the word “Boolean” should be capitalized. However, the Boolean data type, in C++ uses the keyword `bool` which is not capitalized. The possible state values for a C++ Boolean are lower case `true` and `false`.

C++ uses the standard Boolean operators, “and” is given by `&&` , “or” is given by `||`, and “not” is given by `!`. Note that the internally stored values representing true and false are actually 1 and 0 respectively. Hence, we see this in output as well.

### Character Data
In C++ single quotes are used for the character (`char`) data type, and double quotes are used for the `string` data type. Consider the following:

```c++
#include <iostream>
#include <string>
using namespace std;

int main(){

    string strvar = "b";
    char charvar = 'b';

    cout << ('b' == charvar) << endl;
    cout << ("b" == strvar) << endl;

    //cout << ('a' == "a") << endl; // will error!

    return 0;
}
```

### Pointers
A C++ pointer is a variable that stores a memory address.

We know that variables in a computer program are used to label data with a descriptive identifier so that the data can be accessed and used by that computer program. How C++ variables are implemented is worthy of discussion.

In C++ the value of each variable is stored directly in memory without the need for either a reference or an object. This makes access faster, but it is one of the reasons we need to declare each variable because different types take differing amounts of space in memory!

The following code declares a variable called `varName` that has in it a value of 100:

```c++
int varName = 100;
```
In C++ the results of running this code will look like the diagram below:
<p align="center">
    <img src="https://runestone.academy/runestone/static/cppds/_images/cpp_var.png">
</p>
When we want to output the value to the console, we use the variable name to do so.

But, we can also identify the memory location of the variable, which is sometimes very valuable. This address may change each time the program is run. In C++, this will always look odd because it will be the actual memory address written in a hexadecimal code which is a base 16 code like
0x7ffeea988a28.

In C++ we use the address-of operator, `&` to reference the address.
```c++
#include <iostream>
using namespace std;

int main(){
    int varName = 101;
    cout << varName << endl;
    cout << &varName << endl;
    return 0;
}
```
Variables are stored in memory locations which are dependent upon the run itself. If you repeatedly run the above code you may see the location change.

In C++, variables store values directly, making them faster to reference.

If in C++, we want to create a reference to a memory location in C++, we must use a special syntax called a **pointer**.

#### Pointer Syntax
When declaring a pointer in C++ that will “point” to the memory address of some data type, you will use the same rules of declaring variables and data types. The key difference is that there must be an asterisk (*) between the data type and the identifier.
```c++
int *ptrx; // example of a C++ pointer to an integer

// all of these pointer declarations are identical

SOMETYPE *variablename; // preferable
SOMETYPE * variablename;
SOMETYPE* variablename;

//variable declaration for a single integer value
int varName = 100;
int *varPntr;
varPntr = &varName;
```
<p align="center">
<img src = "https://runestone.academy/runestone/static/cppds/_images/point2.png">
</p>

#### Null Pointer
The NULL pointer in C++ points to nothing and is often denoted by the keyword NULL (all caps) or by 0. The NULL pointer is often used in conditions and/or in logical operations.

The following example demonstrates how the NULL pointer works. The variable ptrx initially has the address of x when it is declared. On the first iteration of the loop, it is assigned the value of NULL (i.e. 0) thereby ending the loop:

```c++
#include <iostream>
using namespace std;

int main( ) {
    int x = 12345;
    int *ptrx = &x;

    while (ptrx) {
        cout << "Pointer ptrx points to " << &ptrx << endl;
        ptrx = NULL;
    }

    cout << "Pointer ptrx points to nothing!\n";
}
```

### Functions
Functions allow to structure programs in segments of code to perform individual tasks.

In C++, a function is a group of statements that is given a name, and which can be called from some point of the program. The most common syntax to define a function is:

`type name ( parameter1, parameter2, ...) { statements }`

Where:
```
- type is the type of the value returned by the function.
- name is the identifier by which the function can be called.
- parameters (as many as needed): Each parameter consists of a type followed by an identifier, with each parameter being separated from the next by a comma. Each parameter looks very much like a regular variable declaration (for example: int x), and in fact acts within the function as a regular variable which is local to the function. The purpose of parameters is to allow passing arguments to the function from the location where it is called from.
- statements is the function's body. It is a block of statements surrounded by braces { } that specify what the function actually does.
```
Let's have a look at an example:
```c++
// function example
#include <iostream>
using namespace std;

int addition (int a, int b){
    int r;
    r=a+b;
    return r;
}

int main (){
    int z;
    z = addition (5,3);
    cout << "The result is " << z;
}
```
#### The functions with no type : `Void`
The syntax shown above for functions:

`type name ( argument1, argument2 ...) { statements }`

Requires the declaration to begin with a type. This is the type of the value returned by the function. But what if the function does not need to return a value? In this case, the type to be used is void, which is a special type to represent the absence of value. For example, a function that simply prints a message may not need to return any value:

```c++
#include <iostream>
using namespace std;

void printmessage ()
{
  cout << "I'm a function!";
}

int main ()
{
  printmessage ();
}
```
void can also be used in the function's parameter list to explicitly specify that the function takes no actual parameters when called. For example, printmessage could have been declared as:

```c++
void printmessage (void)
{
  cout << "I'm a function!";
}
```
### Efficiency considerations and const references
Calling a function with parameters taken by value causes copies of the values to be made. This is a relatively inexpensive operation for fundamental types such as int, but if the parameter is of a large compound type, it may result on certain overhead. For example, consider the following function:
```c++
string concanate(string a, string b){
    return a+b;
}
```
This function takes two strings as parameters (by value), and returns the result of concatenating them. By passing the arguments by value, the function forces a and b to be copies of the arguments passed to the function when it is called. And if these are long strings, it may mean copying large quantities of data just for the function call.

But this copy can be avoided altogether if both parameters are made references:

```c++
string concanate(string &a, string &b){
    return a+b;
}
```
Arguments by reference do not require a copy. The function operates directly on (aliases of) the strings passed as arguments, and, at most, it might mean the transfer of certain pointers to the function. In this regard, the version of concatenate taking references is more efficient than the version taking values, since it does not need to copy expensive-to-copy strings.

On the flip side, functions with reference parameters are generally perceived as functions that modify the arguments passed, because that is why reference parameters are actually for.

The solution is for the function to guarantee that its reference parameters are not going to be modified by this function. This can be done by qualifying the parameters as constant:

```c++
string concatenate (const string& a, const string& b)
{
  return a+b;
}
```
By qualifying them as const, the function is forbidden to modify the values of neither a nor b, but can actually access their values as references (aliases of the arguments), without having to make actual copies of the strings.

Therefore, const references provide functionality similar to passing arguments by value, but with an increased efficiency for parameters of large types. That is why they are extremely popular in C++ for arguments of compound types. Note though, that for most fundamental types, there is no noticeable difference in efficiency, and in some cases, const references may even be less efficient!

#### Function Templates
Overloaded functions may have the same definition. For example:
```c++
#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

double sum(double a, double b){
    return a+b;
}

int main(){
    cout << sum(1,11)<< endl;
    cout << sum(1.0, 11.2) << endl;

    return 0;
}
```
Here, sum is overloaded with different parameter types, but with the exact same body.

The function sum could be overloaded for a lot of types, and it could make sense for all of them to have the same body. For cases such as this, C++ has the ability to define functions with generic types, known as function templates. Defining a function template follows the same syntax as a regular function, except that it is preceded by the template keyword and a series of template parameters enclosed in angle-brackets <>:

`template `<template-parameters>` function-declaration` 
The template parameters are a series of parameters separated by commas. These parameters can be generic template types by specifying either the class or typename keyword followed by an identifier. This identifier can then be used in the function declaration as if it was a regular type. For example, a generic sum function could be defined as:
```c++
template <class SomeType>
SomeType sum (SomeType a, SomeType b)
{
  return a+b;
}
```
```c++
#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  cout << k << '\n';
  cout << h << '\n';
  return 0;
}
```
In this case, we have used T as the template parameter name, instead of SomeType. It makes no difference, and T is actually a quite common template parameter name for generic types. 

Templates are a powerful and versatile feature. They can have multiple template parameters, and the function can still use regular non-templated types. For example:

```c++
#include <iostream>
using namespace std;

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

int main ()
{
  if (are_equal(10,10.0))
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";
  return 0;
}
```
[CPP in-built Math functions](http://www.cplusplus.com/reference/cmath/)


