// Find the element in the fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[1000];
    int fibnum = 0, i;
    cout << "Enter the position of array: " << endl;
    cin >> n;
    arr[0] = 0, arr[1] = 1;

    cout << "The fibnum is: ";
    if (n == 0)
    {
        cout << arr[0];
        return 0;
    }
    else if (n == 1)
    {
        cout << arr[1];
        return 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            arr[i] = arr[i - 2] + arr[i - 1];
            // cout << arr[i] << " ";
        }
        cout << arr[i - 1] << " ";
    }

    return 0;
}