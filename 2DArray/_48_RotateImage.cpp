// 48. Rotate Image ----- 2D
// Rotate the image by 90 degrees (clockwise).

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3, m = 3;
    int ans[3][3] = {0};
    //  vector<int> v3 = {1, 2, 3, 4, 5};
    // vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // int n=mat.size();
    // int m=mat.size();
    int i, j;
    // vector<vector<int>> ans(m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            ans[i][j] = mat[j][n - 1 - i];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "---------------------" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}