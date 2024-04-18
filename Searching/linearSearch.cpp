//  Linear Search

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 4;
    int flag = false;
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Element found at index: " << i << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}