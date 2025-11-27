// How to pass function inside an array;

#include <iostream>
using namespace std;

// Array uses Pass by reference -- not pass by value
// Pass by reference -- does not make a copy of elements it just modifys the 
// give element
void Fun(int arr[], int n)
{
    // cout<<sizeof(arr)<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{

    int arr[5] = {3, 2, 1, 6, 7};
    // cout<<sizeof(arr)<<endl;
    // calling a function
    Fun(arr, 5);
}

// output 
// 3 2 1 6 7 