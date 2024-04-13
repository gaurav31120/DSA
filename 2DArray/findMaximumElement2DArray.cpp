// Finf maximum element in 2D array:

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[4][3] = {{123, 124, 459}, {434, 358, 66}, {734, 238, 569}, {150, 161, 192}};
    int m = 4, n = 3;
    int max = INT_MIN;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum element is: " << max << endl;
    return 0;
}