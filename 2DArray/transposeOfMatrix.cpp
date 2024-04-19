// Transpose of a matrix ---- make row elements as column and column elements as rows;

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3, col = 3;
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    cout << "Transpose of the array is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}