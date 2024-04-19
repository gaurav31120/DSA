// Find missing element in array using binary search -----TC - O(n)

#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    int target = 5;
    int left = 0;
    int right = n - 1;

    int mid, ans = -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (mid == arr[mid] - 1)
        {
            // ans=mid;
            left = mid + 1;
        }
        else if (mid == arr[mid] - 2)
        {
            ans = mid;
            right = mid - 1;
        }
    }
    if (ans + 1 == 0)
    {
        cout << "The missing element is: " << n + 1 << endl;
        return 0;
    }

    cout << "The missing element is: " << ans + 1 << endl;

    return 0;
}