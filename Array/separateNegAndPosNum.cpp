//  Separate negative and positive numbers
// 1.2 pointer approach ---- O(n)
// 2.sorting ---- O(nlogn)
// 3.taking extra array ---- O(n) ----- Space comp. ---- O(n)

// Here, we have implemented a 2 pointer approach.
#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 74, -34, -43, 64, -13, 33, 31};
    int n = 8;
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (arr[i] < 0)
            i++;
        if (arr[j] > 0)
            j--;
        if (arr[i] > 0 && arr[j] < 0)
        {
            swap(arr[i], arr[j]);
        }
    }

    cout << "The req array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a,
    a = b;
    b = temp;
}
