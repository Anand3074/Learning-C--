/*
raw pointers, and new and delete operators allow manual memory
management in C++,providing control over allocation and deallocation.
Make sure to always deallocate memory allocated with new or new[],
to avoid memory leaks in your programs.
*/

#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 10;
    // cout << *ptr << endl;

    delete ptr;

    /*In summary, while you might see some value printed for ptr after
    deleting the memory it points to, this behavior is undefined,
    and you should not rely on it. Accessing or using the value of ptr
     after deleting the memory it points to can lead to unpredictable results.
     It's always a good practice to set the pointer to nullptr after deleting
     the memory to avoid accidentally accessing invalid memory.
    */
    // cout << ptr << endl;

    // ptr = nullptr;
    int *pB = new int;
    *pB = 7;

    int *pA = new int[*pB];
    for (int i = 0; i < 6; i++)
    {
        pA[i] = i;
    }
    cout << *pA << endl;
    for (int a = 0; a < 6; a++)
    {
        cout << *pA << endl;
        pA++;
    }
    return 0;
}
