// Program to search the elemetn in the sorted and rotated array

#include <bits/stdc++.h>

using namespace std;

int search(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;
            
        else if (arr[low] < arr[mid])
        {
            if (arr[low] <= x && arr[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {

            if (arr[high] >= x && arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 40, 60, 5, 8};
    int n = 6;

    int x = 5;

    cout << search(arr, n, x);
}