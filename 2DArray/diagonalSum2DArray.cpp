// Find diagonal sum of elements in 2D array:

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    int sum = 0;

    // With 2 loops
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum += arr[i][j];
    //         }
    //     }
    // }

    // With 1 loop

    for (int i = 0; i < m; i++)
    {
        sum += arr[i][i];
    }
    cout << "Diagonal sum is: " << sum << endl;
    return 0;
}