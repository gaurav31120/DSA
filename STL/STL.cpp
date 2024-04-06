// How to declare a vector

// vector <datatype> vectorName; ---- Syntax
//  vector <int> v;

// How to insert value in vector:
// vector<int> v(size of vector) ---- Syntax
// vector<int> v(4);

// How to insert and initialize value in vector:
// vector<int> v(size of vector,initialize) ---- Syntax
// vector<int> v(4,2); ----- Here, every value has value 2 in it

// How to insert value inside a vector

// vector<int>a;
// a.push_back(4);
// a.push_back(5);
// a.push_back(6);
// a.push_back(7);

// How to remove value from vector:
// v.pop_back(); ---- Removes last element
// v.clear() ---- Removes all values from the vector array
// v.erasev.begin()+i) ----- Removes the ith index value in array

// Size and Capacity
// Size - The number of elements present in the array
// Capacity - The capacity of the vector created

// -------------------------------------------------------------------------

// Front, back at empty
// v.front() - Prints the first element
// v.back() - Prints the last element
// v.empty() - Give 1 or 0 based on the element present in the array
// - 0 -false- array is not empty
// - 1 -true- array is empty

//========================================================================
// Iterator in a vector
// v.begin() - Points to the first index of the vector array
// v.end() - Points to the next to last index of the vector array (lastIndex + 1)

// auto -takes any datatype automatically

// v.begin() - Points to the last element
// v.rend() - Points to the previos to the first index

//==============================================================================

// Sorting
// sort(v.begin(),v.end()); ----- sorting in increasing order
// sort(v.begin(),v.end(),greater,int>) ----- sorting in decreasing order

//====================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Create vector, declare
    vector<int> v;
    // size and capacity
    cout << "SIze of v: " << v.size() << endl;         // 0
    cout << "Capacity of v: " << v.capacity() << endl; // 0

    v.push_back(2);
    cout << "SIze of v: " << v.size() << endl;         // 1
    cout << "Capacity of v: " << v.capacity() << endl; // 1

    v.push_back(2);
    cout << "SIze of v: " << v.size() << endl;         // 2
    cout << "Capacity of v: " << v.capacity() << endl; // 2

    v.push_back(3);
    cout << "SIze of v: " << v.size() << endl;         // 3
    cout << "Capacity of v: " << v.capacity() << endl; // 4

    // Update value
    v[1] = 5;
    // Note: - At the time of initializing whatever the size we will give to vector the capcity will also be same

    vector<int> v1(5, 1);
    cout << "SIze of v1: " << v1.size() << endl;         // 5
    cout << "Capacity of v1: " << v1.capacity() << endl; // 5
    v1.push_back(8);
    cout << "SIze of v1: " << v1.size() << endl;         // 6
    cout << "Capacity of v1: " << v1.capacity() << endl; // 10

    vector<int> v3 = {1, 2, 3, 4, 5};
    cout << v3.size() << endl; // 5

    // Delete value from vector
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);

    vnew.pop_back();

    cout << "Size of vnew: " << vnew.size() << endl;         // 4
    cout << "Capacity of vnew: " << vnew.capacity() << endl; // 8

    vnew.erase(vnew.begin() + 1);                            // 4 14 42
    cout << "Size of vnew: " << vnew.size() << endl;         // 3
    cout << "Capacity of vnew: " << vnew.capacity() << endl; // 8

    cout << "vnew array is: " << endl;
    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }
    cout << endl;

    vnew.insert(vnew.begin() + 1, 50); // 4 50 14 42
    cout << "vnew array is: " << endl;
    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }

    vnew[1] = 37; // 4 37 14 42
    cout << "vnew array is: " << endl;
    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }

    // clear all the elements
    vnew.clear();                                            // remove all th element
    cout << "Size of vnew: " << vnew.size() << endl;         // 0
    cout << "Capacity of vnew: " << vnew.capacity() << endl; // 8

    // -----------------------------

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);

    cout << arr[0] << endl;
    cout << arr.front() << endl;
    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;

    // Copy one value vectot to another vectot

    vector<int> a;
    a = arr;
    cout << a.size() << endl; // 4

    for (auto i : arr)
    {
        cout << i << " "; // 2 12 21 122
    }
    cout << endl;

    // Sorting

    vector<int> ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    // Sorting in increasing order

    // sort(ans.begin(),ans.end());

    sort(ans.begin(), ans.end()); // 5 15 54 125 235
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;

    // Sorting in decreasing order

    sort(ans.begin(), ans.end(), greater<int>()); // 235 125 54 15 5
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    // Another way ----  Sorting in decreasing order
    sort(ans.rbegin(), ans.rend()); // 235 125 54 15 5
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    sort(ans.begin(), ans.end());

    cout << binary_search(ans.begin(), ans.end(), 54) << endl; // 1
    cout << binary_search(ans.begin(), ans.end(), 55) << endl; // 0

    cout << find(ans.begin(), ans.end(), 54) - ans.begin() << endl; // 2
}
