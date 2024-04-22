// division - here, we will divide and find the quotient of two numbers using binary search.
//  TC - O(n)

#include <iostream>
using namespace std;

int findQuotient(int a, int b)
{
    int left = 0, right = b, mid;
    int ans = -1;

    if (a == 0)
    {
        return -1;
    }

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (mid * a == b)
        {
            ans = mid;
            return ans;
        }
        else if (mid * a > b)
        {
            right = mid - 1;
        }
        else if (mid * a < b)
        {
            left = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int dividend = 296;
    int divisor = 10;

    int quotient = findQuotient(divisor, dividend);
    if (quotient == -1)
    {
        cout << "Division by zero infinite:";
    }
    else
    {
        cout << "The quotient is: " << quotient << endl;
    }

    return 0;
}
