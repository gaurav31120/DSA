// All numbers appearing 2 times only one number is appearing 1 time find the number.

#include <iostream>
using namespace std;

int uniqueNumber(int arr[], int size)
{
    int ans = 0;

    // using XOR to all numbers in the array
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 6, 4, 6, 4, 5, 1, 3, 2, 5};
    int size = 11;

    int result = uniqueNumber(arr, size);

    cout << "The unique number is:" << result;

    return 0;
}

// O/P - The unique number is:1

// TC = O(n)
// SC = O(1)