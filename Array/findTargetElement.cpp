// Find target element

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5;
    int size = 5;
    int targetFound;
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            targetFound = true;
            break;
        }
    }

    if (targetFound)
    {
        cout << "Element found at index: " << i;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}