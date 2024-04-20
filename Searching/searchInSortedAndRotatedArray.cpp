// leetcode 33. Search is Rotated Sorted Array

// Search in sorted and rotated array ---- TC - O(logn)

#include <iostream>
using namespace std;

int PivotElement(int[], int);
int BinarySearch(int[], int, int, int, int);

int main()
{
    int arr[10] = {7, 8, 9, 10, 1, 2, 3, 4, 5, 6};
    int n = 10;
    int target = 8;
    int result = -1;

    int pivot = PivotElement(arr, n);

    cout << "The pivot element is: " << arr[pivot] << endl;
    ;

    if (target >= arr[0])
    {
        result = BinarySearch(arr, n, 0, pivot, target);
    }
    else if (target < arr[0])
    {
        result = BinarySearch(arr, n, pivot + 1, n - 1, target);
    }
    else
    {
        result = pivot;
    }

    if (result == -1)
    {
        cout << "The searched element is not found. " << endl;
    }
    else
    {
        cout << "The searched element is: " << arr[result] << endl;
    }

    return 0;
}

int PivotElement(int arr[], int n)
{
    int pivot;
    pivot = -1;
    int mid;
    int left = 0, right = n - 1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        // corner cases
        if (left == right) // here, you will do mistake
        {   // single element
            return left;
        }

        if (mid - 1 >= 0 && arr[mid] < arr[mid - 1]) // here, you will do mistake
        {
            pivot = mid - 1;
            break;
        }
        else if (mid + 1 < n && arr[mid] > arr[mid + 1]) // here, you will do mistake
        {
            pivot = mid;
            break;
        }
        else if (arr[mid] < arr[0])
        {
            right = mid - 1;
        }
        else if (arr[mid] > arr[0])
        {
            left = mid + 1;
        }
    }

    return pivot;
}

int BinarySearch(int arr[], int n, int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}