// program to compute the square root of the given number without using square root by binary search approach

#include <bits/stdc++.h>

using namespace std;

// binary search approach
int squareRoot(int x)
{
    int result = -1;
    int low = 0;
    int high = x;

    int mid = 0;

    while (low <= high)                                  
    {
        mid = (low + high) / 2;               

        if (mid * mid == x)                      //perfect square
            return mid;
        else if (mid * mid > x)                 //square root is in left half element
            high = mid - 1;
        else
        {
            low = mid + 1;                     //square root is in right half if exist
            result = mid;
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << squareRoot(n);
}