// Find the maximum element in the array

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {55, 32, 657, 217, 76};
    int max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << " The maximum element is: " << max;
    return 0;
}

// Same program by taking input from user

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     cout << "The length of the array is 5"<<endl;
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     for (int i = 1; i < 5; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << "The maximum element of the array is : " << max;
//     return 0;
// }