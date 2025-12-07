// Count number of 0's and 1's

#include <iostream>
using namespace std;

int count0and1(int arr[], int size)
{
    int count0 = 0, count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
    }

    cout << "No. of 0's " << count0 << endl;
    cout << "No. of 1's " << count1;

    return 0;
}

int main()
{
    int arr[] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0};
    int size = 20;
    count0and1(arr, size);

    return 0;
}