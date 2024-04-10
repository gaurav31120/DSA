// Count no. of 0's and 1's in an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 0, 0, 1};
    int n = 5, countZero = 0, countOne = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countZero += 1;
        }
        else if (arr[i] == 1)
        {
            countOne += 1;
        }
    }
    cout << "The cout of zero is " << countZero << endl;
    cout << "The cout of one is " << countOne << endl;
    return 0;
}
