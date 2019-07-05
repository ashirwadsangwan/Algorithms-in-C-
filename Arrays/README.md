## Collections
In addition to the numeric, Boolean, and character types, C++ also offers built-in collection types. A collection data type is a grouping of some number of other data items (possibly only zero or one) that have some shared significance or need to be operated upon together.

Arrays, vectors, strings, sets, and hash tables are among these useful C++ collection types.

### Arrays
An array is a data structure consisting of an ordered collection of data elements, of identical type in which each element can be identified by an array index. More technically, an array data structure is an ordered arrangement of values located at equally spaced addresses in contiguous computer memory.

A C++ array is always stored in contiguous memory. C++ arrays can be allocated in two different ways:

1. statically allocated in which the array size is fixed at compile-time and cannot change
2. dynamically allocated in which pointers are used in the allocation process so the size can       change at run-time.
#### Why use an array?
C++ is a language often used for real-time or low-level processing where speed is essential and/or there is only a fixed amount of space available.
Statically allocated C++ arrays must be declared with both a type and a size at compile-time.

```c++
double darray[4];
int iarray[10];
char arr2[3000];
```
It is also possible to initialize statically allocated arrays at compile time, in which case the number of items determines the array’s size.

```c++
int arr[] = {1, 2, 3, 4};  // This is size 4.
char arr2[] = {'a', 'b', 'c'}; // This is size 3.
string arr3[] = {"this", "is", "an", "array"}; // This is size 4.
```
Note that an array with a single element is not the same type as the atomic type, so the following are not the same.

```c++
double darray[] = {1.2};  // must use index to access value
double ddouble = 1.2;     // can't use index to access value
```
C++ is designed for speed. C++ will not only let you iterate beyond either end of an array, but it will let you change the values beyond either end of the array with sometimes catastrophic results.

The phrase, “be careful what you wish for” is a great one to remember when programming in C++. Because C++ will generally try to do everything you ask for.

```c++
#include <iostream>
using namespace std;

int main(){
    int myarray[] = {2,4,6,8};
    for (int i=0; i<=8; i++){
        cout << myarray[i] << endl;
        cout << "id: " << &myarray[i] << endl;
    }
    return 0;
```

