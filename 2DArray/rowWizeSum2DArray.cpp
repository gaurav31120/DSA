// Find sum of elements in 2D array: Row wise

#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int m = 4, n = 3;
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum Row wise is: " << sum << endl;
    return 0;
}