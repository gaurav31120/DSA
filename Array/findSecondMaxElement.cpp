//  Program to find the second maximum number in tyhe array

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {32, 54, 77, 76, 23};
    int max1 = arr[0], max2 = arr[0];
    int i = 0;
    int length = sizeof(arr) / sizeof(int);

    while (i < length)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
            i++;
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
            i++;
        }
        else
        {
            i++;
        }
    }
    cout << "The maximum element in array is :" << max1;
    cout << "The second maximum element inarray is :" << max2;

    return 0;
}

//  Same program while taking input from user

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[5];
//     cout << "Enter the size of array";
//     for(int i=0;i<5;i++) {
//         cin>>arr[i];
//     }

//     int max1 = arr[0], max2 = arr[0];
//     int i = 0;
//     int length = sizeof(arr) / sizeof(int);

//     while (i < length)
//     {
//         if (arr[i] > max1)
//         {
//             max2 = max1;
//             max1 = arr[i];
//             i++;
//         }
//         else if (arr[i] > max2)
//         {
//             max2 = arr[i];
//             i++;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout << "The maximum element in array is :" << max1<<endl;
//     cout << "The second maximum element inarray is :" << max2;

//     return 0;
// }