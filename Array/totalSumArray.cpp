#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 5, sum = 0;
    cout << "Enter 5 elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of total array is " << sum;
    return 0;
}