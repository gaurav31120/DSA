//  Bubble sort ----  TC - O(n ^ 2)

// Bubble sort in increasing order
#include <iostream>
#include <vector>
using namespace std;

int bubbleSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++) // iterations - n-1
    {
        for (int j = 0; j < n - i - 1; j++) // comparisions - n-i-1
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int print(vector<int> &v)
{
    cout << "Sorted array in increasing order is: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

// int bubbleSortDecreasingOrder(vector<int> &v)
// {
//     int n = v.size();
//     for (int i = 0; i < n; i++)  // iterations - n-1
//     {
//         for (int j = 0; j < n - i - 1; j++)  // comparisions - n-i-1
//         {
//             if (v[j] < v[j + 1])
//             {
//                 swap(v[j], v[j + 1]);
//             }
//         }
//     }
// }

// int printDecreasingOrder(vector<int> &v)
// {
//     cout << "Sorted array in decreasing order is: " << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }

int main()
{
    vector<int> v = {5, 3, 4, 6, 1, 2};
    int n = v.size();

    bubbleSort(v);
    print(v);

    // bubbleSortDecreasingOrder(v);
    // printDecreasingOrder(v);

    return 0;
}