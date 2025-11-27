// Two pointer approach

#include <iostream>
using namespace std;

int twoPtr(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i];
            i++;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    twoPtr(arr, size);
}

// TC = O(n)