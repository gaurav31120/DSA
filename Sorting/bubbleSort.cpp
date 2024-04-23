//  Bubble sort

// Bubble sort in increasing order
#include <iostream>
#include <vector>
using namespace std;

int bubbleSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
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

int main()
{
    vector<int> v = {5, 3, 4, 6, 1, 2};
    int n = v.size();

    bubbleSort(v);

    print(v);

    return 0;
}