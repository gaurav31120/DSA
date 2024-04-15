// Binary Search ---- TC - O(logn)

#include <iostream>
using namespace std;

int main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = 12;
    int target = 9;

    int mid, start, end;
    start = 0, end = n - 1;

    cout << "The target element is found at index: ";

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] > target)
        {
            mid--;
            end = mid;
        }
        else
        { // arr[mid] < target
            mid++;
            start = mid;
        }
    }

    return 0;
}