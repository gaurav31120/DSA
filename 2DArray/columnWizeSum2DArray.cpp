// Find sum of elements in 2D array:Column wise

#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int m = 4, n = 3;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[j][i];
        }
    }
    cout << "Sum Column wise is: " << sum << endl;
    return 0;
}