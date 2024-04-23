// Selection sort - TC - O(n)

#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int> &v)
{
    int n = v.size();
    int minIndex;

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
}

int print(vector<int> &v)
{
    cout << "Sorted array is: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {2, 4, 1, 6, 3, 5};

    selectionSort(v);
    print(v);

    return 0;
}