// Length of string

#include <iostream>
using namespace std;

int findLength(char ch[], int size)
{
    int length = 0;

    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
}

int main()
{
    char ch[100];
    // cin >> ch; // this will not count any spaces
    cin.getline(ch, 100); // this will count spaces also
    int len = findLength(ch, 100);

    cout << "Length of string is : " << len << endl;
    return 0;
}