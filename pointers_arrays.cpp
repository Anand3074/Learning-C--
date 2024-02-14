#include <iostream>
using namespace std;

int main()
{
    /*
    A pointer is a variable that stores the memory address
    of another variable (or function). It points to the location
    of the variable in memory,and it allows you to access or
     modify the value indirectly.
      */

    int arr[] = {10, 65, 23, 37, 65, 45};
    // cout << &arr << endl;
    int *pA = arr;
    cout << pA << endl;   // prints address of arr
    cout << *pA << endl;  // prints value of arr of first value as arr
    cout << *arr << endl; // prints value of first of value
    cout << arr << endl;  // prints address of arr

    /*this moves pt to next memory
    location as it is of type int it adds 4 bits to it i.e from 80 to 84 example*/
    cout << ++pA << endl; // prints first incremets and puts out value

    /*printing the pointers 64 times to check pointer additions*/
    for (int i = 0; i < 64; i++)
    {
        cout << pA << endl;
        pA++;
    }

    /*printing the array to check pointer additions*/
    for (int i = 0; i < 6; i++)
    {
        cout << *pA << ", " << pA << endl;
        pA++;
    }

    return 0;
}
// char, boolean - 1bits
// int, float - 4bits
// double - 8bits
/*  Arrays are used to store multiple values of
the same data type in consecutive memory locations.*/