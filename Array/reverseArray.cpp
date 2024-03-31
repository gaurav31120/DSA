// Reverse an array

#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int i = 0, j = 5, temp;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++, j--;
    }

    cout << "The reversed array is :";

    for (i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
