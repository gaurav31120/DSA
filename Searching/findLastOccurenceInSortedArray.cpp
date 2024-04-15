//  Find last occurence of a number in a sorted array
// This can be done using binary search  ---- TC - O(n)

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 30, 30, 40, 50};
    int n = 7;
    int target = 30;
    int start, end, mid, ans;
    start = 0, end = n - 1, ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            mid++;
            start = mid;
        }
        else if (arr[mid] > target)
        {
            mid--;
            end = mid;
        }
        else if (arr[mid] < target)
        {
            mid++;
            start = mid;
        }
    }

    cout << "The required index for last occurence is: " << endl;

    cout << ans;
    return 0;
}