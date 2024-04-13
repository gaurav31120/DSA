#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int m = 4, n = 3;
    int target = 16;

        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Element found at index: " << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "Element not found" << endl;
    return 0;
}