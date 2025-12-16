// All numbers appearing 2 times only one number is appearing 1 time find the number.

#include <iostream>
using namespace std;

int uniqueNumberByXOR(int arr[], int size) // TC - O(n) SC - O(1)
{
    int ans = 0;

    // using XOR to all numbers in the array
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int uniqueNumberBy2Loops(int arr[], int size)  // TC - O(n^2) SC - O(1)
{
    int count = 0;
    // using two loops

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
        {
            return arr[i];
        }
        count = 0;
    }
}

int main()
{
    int arr[] = {2, 3, 6, 4, 6, 4, 5, 1, 3, 2, 5};
    int size = 11;

    int result = uniqueNumberByXOR(arr, size);
    int resultBy2Loops = uniqueNumberBy2Loops(arr, size);

    cout << "The unique number is:" << result << endl;
    cout << "The unique number is:" << resultBy2Loops;

    return 0;
}

// O/P - The unique number is:1

// TC = O(n)
// SC = O(1)