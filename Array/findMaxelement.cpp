// Find maximum element in array

#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[], int size)
{
    int maxAns = INT_MIN;
    // int max = -7567;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
        // maxAns = max(arr[i], maxAns); // max inbuild function returns maximum element
    }

    cout << "Maximum element is: " << maxAns;

    return 0;
}

int main()
{
    int arr[5] = {3, 5, 2, 74, 8};
    int size = 5;
    findMax(arr, size);
}