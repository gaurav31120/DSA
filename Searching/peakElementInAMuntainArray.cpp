// Find which is the peak element in the whole mountain while increasing or decreasing array values;

#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {10, 20, 21, 22, 23, 32, 50, 40, 30};
    int n = 9;
    int left = 0, right = n - 1, mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }
        else
        { // arr[mid]>arr[mid+1]
            right = mid;
        }
    }

    cout << "The peak element is: " << left << endl;
    return 0;
}