// 2643. Row With Maximum Ones ---- leetcode

// Here, we have to print maximum no of 1's which row has and the respective row index;

#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = {{0, 0}, {1, 1}, {1, 0}};
    int m = 3, n = 2;
    int i, j;
    int maxIndex = 0, max = 0, count = 0;

    for (i = 0; i < m; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            maxIndex = i;
        }
    }

    cout << "The req ans is: " << endl;
    cout << maxIndex << " " << max;
    // cout << {maxIndex,max};
    return 0;
}