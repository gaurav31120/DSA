//  Find total number of occurence of a number in a sorted array
// This can be done using binary search  ---- TC - O(n)

//This code is not working in vs code but working in online compiler need to check.

#include <iostream>
using namespace std;

int findFirstOccurence(int arr[], int n, int target)
{

    int start, end, mid, ans;

    start = 0, end = n - 1, ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    cout << ans;
    return 0;
}

int findLastOccurence(int arr[], int n, int target)
{

    int start, end, ans;
    int mid;

    start = 0, end = n - 1, ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    cout << ans;
    return 0;
}

int findTotalOccurence(int arr[], int n, int target)
{
    int firstOcc = findFirstOccurence(arr, n, target);
    int lastOcc = findLastOccurence(arr, n, target);
    int total = lastOcc - firstOcc + 1;

    cout << firstOcc << " ";
    cout << lastOcc << endl;

    cout << "Count of occurence is: " << total;
    return 0;
}

int main()
{
    int arr[7] = {10, 20, 30, 30, 30, 40, 50};
    int n = 7;
    int target = 30;
    int ans = findTotalOccurence(arr, n, target);
    cout << "Total Occ is:  " << ans << endl;
    int ansIndex = findLastOccurence(arr, n, target);

    if (ansIndex == -1)
    {
        cout << "Element not found " << endl;
    }
    else
    {
        cout << "Element found at Index: " << ansIndex << endl;
        }

    return 0;
}
