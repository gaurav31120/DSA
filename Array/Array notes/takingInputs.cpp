// How to take input in an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return 0;
}

// Taking array size as input also. -- Please do not do as it is a bad practice.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>> size;
    // int arr[size]; // ERROR -- expression must have a constant value

    
    return 0;
}

