// Find square root of a number

// Method 1.using linear search ---- TC -  O(n)
// Method 2.using binary search ---- TC -  O(logn)

#include <iostream>
using namespace std;

// Method 1- using linear search
int main()
{
    int value = 167;

    for (int i = 0; i <= value; i++)
    {
        if (i * i == value)
        {
            cout << i;
            return 0;
        }
        else if (i * i > value)
        {
            cout << i - 1;
            return 0;
        }
    }
    return 0;
}