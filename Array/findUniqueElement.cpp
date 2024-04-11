//  Find unique element - here, every number will comes twice except one number - find the number which comes only once.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[7] = {2, 11, 10, 5, 5, 10, 2};
//     int n = 7, count = 0;
//     ;
//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//         {
//             cout << "The unique element is " << arr[i];

//             break;
//         }
//     }
//     return 0;
// }

// Using XOR ^

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {2, 11, 10, 5, 5, 10, 2};
    int n = 7, ans = 0, i;
    ;
    for (i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "The unique element is " << ans;
    return 0;
}
