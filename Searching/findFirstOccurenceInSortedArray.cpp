//  Find first occurence of a number in a sorted array
// This can be done using binary search

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 30, 30, 40, 50};
    int n = 7;
    int target = 30;
    int start, mid, end, ans;
    start = 0;
    end = n - 1;
    ans = -1;

    while (start <= end)
    {
        mid = (start + end) / 2;         // This can cause integer overflow
        mid = start + (end - start) / 2; // To stap integer overflow ---- Best Practice
        mid = start / 2 + end / 2;       // To stap integer overflow

        if (arr[mid] == target)
        {
            ans = mid;
            mid--;
            end = mid;
        }
        else if (arr[mid] > target)
        {
            mid--;
            end = mid;
        }
        else
        {
            mid++;
            start = mid;
        }
    }
    cout << "The required index for first occurence is: " << endl;

    cout << ans;
    return 0;
}