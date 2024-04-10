// Double each element of array

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of index " << i << " ";
        cin >> arr[i];
    }
    cout << endl
         << "The required array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] * 2 << " ";
    }
    return 0;
}