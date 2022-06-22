#include <bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int x, int low, int high)
{
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (x == arr[mid])
            return mid;
        else if (x < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int search(int arr[], int x)
{
    if (arr[0] == x)
        return 0;

    int i = 1;

    while (true)
    {
        i = i * 2;
    }

    if (arr[i] == x)
        return i;

    return binarysearch(arr, x, i / 2 + 1, i - 1);
}


int main()
{
    return; 
}