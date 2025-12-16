// Sort 0 and 1

#include <iostream>
using namespace std;

// 2 pointer approach -- TC-O(n) SC-(1)
void sort0and1_twoPointerApproach(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

// counting method -- TC-O(n) SC-O(1)
void sort0and1(int arr[], int size)
{
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < size; i++)
    {
        arr[i] = 1;
    }
    return;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    b = a;
    a = temp;
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    int arr[] = {1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "counting method --  ";
    sort0and1(arr, size);
    printArr(arr, size);
    cout << endl
         << "-------------------------------------------------" << endl;
    cout << "2 pointer approach --  ";
    sort0and1_twoPointerApproach(arr, size);
    printArr(arr, size);

    return 0;
}