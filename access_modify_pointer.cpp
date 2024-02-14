#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *pA = &a;

    cout << &a << endl;
    cout << *pA << endl;
    *pA = 25;
    cout << a << endl;
    return 0;
}