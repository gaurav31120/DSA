// Search in nearly sorted array - TC - O(logn)

// Here, we will search in nearly sorted array using binary search.

#include <iostream>
#include <vector>
using namespace std;

int nearlySortedArray(vector<int> &v, int n, int target)
{
    int left = 0, right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (v[mid] == target)
            return mid;
        else if (v[mid - 1] == target)
            return mid - 1;
        else if (v[mid + 1] == target)
            return mid + 1;

        else if (v[mid] > target)
        {
            right = mid - 2;
        }
        else if (v[mid] < target)
        {
            left = mid + 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {2, 1, 3, 5, 4, 7, 6};
    int n = v.size();
    int target = 2;

    int ans = nearlySortedArray(v, n, target);
    if (ans == -1)
    {
        cout << "Element not found. " << endl;
    }
    else
    {
        cout << "The searched element found at index: " << ans << endl;
    }

    return 0;
}
