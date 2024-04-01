// Find the missing number in the array

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 5, 1};
    int n = 5;
    int sum = 0, sumTotal = 0;

    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }
    sumTotal = n * (n + 1) / 2;
    cout << "The missing element is: " << sumTotal - sum << endl;

    return 0;
}

// Same program while taking input from user

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     int n = 5;
//     cout<<"Enter the elements in the array: ";
//     for(int i=0;i<n-1;i++) {
//         cin>>arr[i];
//     }
//     int sum = 0, sumTotal = 0;

//     for (int i = 0; i < n-1; i++)
//     {
//         sum += arr[i];
//     }
//     sumTotal = n * (n + 1) / 2;
//     cout << "The missing element is: " << sumTotal - sum << endl;
//
//     return 0;
// }