// How to take input in an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return 0;
}

// How to print array to output

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 6, 7, 5, 3};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}