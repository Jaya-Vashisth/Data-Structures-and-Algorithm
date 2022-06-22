// Program is to get the minimum element from a sorted and rotated array
// approach- binary search --> one side of the search is sorted and another is unsorted

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (low + 1 == high)
                return arr[low] < arr[high] ? arr[low] : arr[high]; // when reached at second smallest and smallest element

            else if (arr[low] < arr[mid])                     //when the left half is sorted
            {
                if (arr[low] < arr[high])                     //check left half contain or not 
                    high = mid;
                else
                    low = mid;
            }
            else                                             //when right half of the array is sorted
            {
                if (arr[mid + 1] < arr[mid] - 1)             //check whether the element is in right half or left half
                    low = mid;
                else
                    high = mid;
            }
        }

        // Your code here
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        Solution obj;
        cout << obj.minNumber(a, 0, n - 1) << endl;
    }
    return 0;
} // } Driver Code Ends