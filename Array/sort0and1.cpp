// Sort 0 and 1

// Apprroach 1: using counting
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[8] = {1, 0, 1, 1, 0, 0, 1, 1};
//     int n = 8;
//     int countZero = 0, countOne = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             countZero++;
//         }
//         if (arr[i] == 1)
//         {
//             countOne++;
//         }
//     }

//     // cout << countZero << " " << countOne << endl;

//     for (int i = 0; i < countZero; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int j = countZero; j < n; j++)
//     {

//         arr[j] = 1;
//     }

//     cout << "Sorted array is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Apprroach 2: using counting

#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 0, 0, 1, 1, 1, 0, 0, 1};
    int n = 9;
    int i = 0, j = n - 1;
    int temp;

    while (i < j)
    {
        if (arr[i] == 0)
            i++;
        if (arr[j] == 1)
            j--;
        if (arr[i] == 1 && arr[j] == 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    cout << "The sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}