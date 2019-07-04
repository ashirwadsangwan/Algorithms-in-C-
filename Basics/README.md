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

<img src="https://runestone.academy/runestone/static/cppds/_images/cpp_var.png" align="center">
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
<img src = "https://runestone.academy/runestone/static/cppds/_images/point2.png" align="center">

#### NUll Pointer
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



