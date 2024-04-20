// Find square root of a number

// Method 1.using linear search ---- TC -  O(n)
// Method 2.using binary search ---- TC -  O(logn)

#include <iostream>
using namespace std;

// Method 2 - using binary search

int main()
{
    int num = 576, mid, result = -1;
    int left = 0, right = num;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (mid * mid == num)
        {
            result = mid;
            break;
        }
        else if (mid * mid > num)
        {
            right = mid - 1;
        }
        else if (mid * mid < num)
        { //(mid * mid < num)
            left = mid + 1;
            result = mid;
        }
    }
    cout << "The square root is: " << result << endl;
    return 0;
}

// Method 1- using linear search
//  int main()
//  {
//      int value = 167;

//     for (int i = 0; i <= value; i++)
//     {
//         if (i * i == value)
//         {
//             cout << i;
//             return 0;
//         }
//         else if (i * i > value)
//         {
//             cout << i - 1;
//             return 0;
//         }
//     }
//     return 0;
// }