// Sort  0's 1's and 2's in an array ----- Dutch National Flag

// 1. Counting method ----- O(n)
// 2. 2 pointer approach ----- O(n)
// 2. Sorting ----- O(nlog(n))

// 1. Counting method - here it is implemented
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[18] = {0, 1, 2, 2, 1, 0, 1, 0, 0, 1, 1, 2, 1, 2, 0, 0, 0, 1};
//     int i, n = 18, countZero = 0, countOne = 0, countTwo = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             countZero += 1;
//         }
//         else if (arr[i] == 1)
//         {
//             countOne += 1;
//         }
//         else if (arr[i] == 2)
//         {
//             countTwo += 1;
//         }
//     }
//     for (i = 0; i < countZero; i++)
//     {
//         arr[i] = 0;
//     }
//     for (; i < countZero + countOne; i++)
//     {
//         arr[i] = 1;
//     }
//     for (; i < n; i++)
//     {
//         arr[i] = 2;
//     }
//     cout << "The cout of zero is " << countZero << endl;
//     cout << "The cout of one is " << countOne << endl;
//     cout << "The cout of one is " << countTwo << endl;

//     cout << "The sorted array is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// 2. 2 pointer approach - here it is implemented

#include <iostream>
using namespace std;

int main()
{
    int arr[18] = {0, 1, 2, 2, 1, 0, 1, 0, 0, 1, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = 18;
    int i = 0, left = 0, right = n - 1;
    while (i <= right)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[left]);
            left++;
            i++;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[right]);
            right--;
        }
    }

    cout << "The sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
