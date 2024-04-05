#include <iostream>
using namespace std;

int main()
{
    int n = 6, j;
    int arr[6] = {2, 7, 4, 11, 5, 8};

    // Method 1
    int x = arr[n - 1];
    for (j = n - 1; j > 0; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[j] = x;

    // Method 2:
    // int a=0,b=n-1,temp;
    // while(a<b) {
    //     temp = arr[a];
    //     arr[a] = arr[b];
    //     arr[b] =temp;
    //     a++;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}