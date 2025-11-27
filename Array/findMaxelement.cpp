// Find maximum element in array

#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[], int size)
{
    int max = INT_MIN;
    // int max = -7567;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element is: " << max;

    return 0;
}

int main()
{
    int arr[5] = {3, 5, 2, 74, 8};
    int size = 5;
    findMax(arr, size);
}