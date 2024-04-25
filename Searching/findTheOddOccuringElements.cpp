// Find the odd occuring elements using binary search ---- TC - O(logn)

#include <iostream>
#include <vector>
using namespace std;

int findOddOccuringElement(vector<int> &v, int n)
{
    int left = 0, right = n - 1, mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (mid % 2 == 0 && v[mid] == v[mid - 1])
        {
            right = mid - 2;
        }

        else if (mid % 2 == 0 && v[mid] == v[mid + 1])
        {
            left = mid + 2;
        }
        else if (mid % 2 == 1 && v[mid] == v[mid] + 1)
        {
            right = mid - 1;
        }
        else if (mid % 2 == 1 && v[mid] == v[mid - 1])
        {
            left = mid + 1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {2};
    int n = v.size();

    int ans = findOddOccuringElement(v, n);

    if (ans == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "The searched element is: " << v[ans] << endl;
    }
    return 0;
}