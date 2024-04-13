// 2D array
// Taking input from user

#include <iostream>
using namespace std;

int main()
{
    int arr[4][3];
    int n = 4, m = 3;

    cout << "Enter the element of 2D array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        }

    cout << "The 2D array is: Row wise" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The 2D array is: Column wise" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
