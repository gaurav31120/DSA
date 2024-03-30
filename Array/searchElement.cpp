// Search the index of the element in an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {45, 76, 764, 56, 87};
    int toFind = 56;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == toFind)
        {
            cout << "The index where " << toFind << " is present is: " << i;
            return 0;
        }
    }
    cout << "Element not found: -1";
    return 0;
}