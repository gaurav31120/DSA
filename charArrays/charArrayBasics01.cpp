// integer array-- --int arr[5]; //takes 20 bytes

// Syntax:
// datatype nameOfArray[sizeOfArray];

//  Character array:
// char ch[5]; ---- takes total 5 bytes of space
// 1 char takes 2 byte

/// How to declare char array:

#include <iostream>
using namespace std;

int main()
{
    char ch[6];
    // taking input in char array
    // cin >> ch;
    cin.getline(ch, 100);
    // giving output in char array
    cout << ch;

    // Note: when it will find null ('\0') space then it will return the value and will not go to the next wod.
    //  cin>>ch; ----> input gaurav kr
    //  cout>>ch; ----> output gaurav

    // Note:
    // These are the conditions where input character stops and returns the execution

    // Enter ---- '\n'
    // Tab ---- '\t'
    // Space ---- ' '

    // cin>>ch; ----> input gaurav kr
    // cout>>ch; ----> output gaurav

    // To stop this we will use cin.getline(name, size) to take input

    cout << endl
         << "-------------------------" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "At index " << i << " " << ch[i] << " is present" << endl;
    }
    return 0;
}

// Note:
//  These are the conditions where input character stops and returns the execution

// Enter ---- '\n'
// Tab ---- '\t'
// Space ---- ' '

// cin>>ch; ----> input gaurav kr
// cout>>ch; ----> output gaurav

// at the end the string/char is ended/terminated after that a '\0' (null) character will take place.

//  ASCII value of null character is 0

// To printing individual characters of a string

// for (int i = 0; i < sizeOfString ; i++)
// {
//     cout << ch[i];
// }

// Char arrays are memory efficient and runs faster than strings