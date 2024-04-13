// Rotate array by kth elements

// 1.Taking temp variable and swaping ---- O(n+k)
// 2. Using Modulus operator ---- O(n+k) ----SC----O(n)

// 2. Using Modulus operator
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int ans[7];
    int n = 7;
    int k = 3;

    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }

    cout << "The rotated array elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// 1.Taking temp variable and swaping

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int n = 7;
//     int j, k = 3;
//     int temp;

//     while (k--)
//     {
//         temp = arr[n - 1];
//         for (j = n - 1; j > 0; j--)
//         {
//             arr[j] = arr[j - 1];
//         }
//         arr[j] = temp;
//     }

//     cout << "The rotated array elements are: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }