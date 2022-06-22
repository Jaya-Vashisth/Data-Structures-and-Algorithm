// program to get the majority element in the given array

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        int count = 1;
        int res = arr[0];

        for (int i = 0; i < size; i++)             //gives the candidate for the majority element
        {
            if (res == arr[i])
                count++;
            else
            {
                count--;

                if (count == 0)
                {
                    count = 1;
                    res = arr[i];
                }
            }
        }

        count = 0;

        for (int i = 0; i < size; i++)        //check whether the candidate is majority element or not
        {
            if (arr[i] == res)
                count++;
        }

        if (count > size / 2)
            return res;
        else
            return -1;

        // your code here
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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
// } Driver Code Ends