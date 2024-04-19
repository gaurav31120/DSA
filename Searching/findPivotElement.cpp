// Find pivot element in an array
// 1. Using binary search ---- TC -O(logn)
// 2. Using Linear search ----- TC- O(n)
// 3. Using sorting ---- TC - O(nlogn)

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    int n = 10;
    int mid, left = 0, right = n - 1;
    int ans = -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid - 1])
        {
            ans = mid - 1;
            break;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < arr[0])
        {
            right = mid - 1;
        }
        else if (arr[mid] >= arr[0])
        {
            left = mid + 1;
        }
    }
    cout << "The pivot element is: " << ans << endl;
    return 0;
}