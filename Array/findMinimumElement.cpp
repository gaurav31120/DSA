// Find the minimum element in the array

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 6, 11, 2, 8};
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "The minimum number is: " << min;

    return 0;
}

// Write same program by taking input from user

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];

//     cout << "Enter the elements of the array";

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     int min = arr[0];
//     for (int i = 1; i < 5; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     cout << "The minimum number is: " << min;

//     return 0;
// }
