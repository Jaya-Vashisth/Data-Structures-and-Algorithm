//program to find the longest subarray present in the array with consecutive elements i.e - 1,2,3,.. or 78,79,80..

#include <bits/stdc++.h>
using namespace std;

int longestSubsequene(int arr[], int n)
{
    int res = 0;
    int current = 0;

    unordered_set<int> ar;
   
    for (int i = 0; i < n; i++)
        ar.insert(arr[i]);
    
    // traverse through whole array
    for (int i = 0; i < n; i++)
    {   
        //consider the element which is starting point of a sequence else ignore
        if (ar.find(arr[i] - 1) == ar.end())
        {
            current = 1;
            
            //find the length of subarray with ith element in consecutive sequence
            while (ar.find(arr[i] + current) != ar.end())
                current++;
            
            //update the result
            res = max(res, current);
        }
    }

    return res;
}

int main()
{
    int arr[] = {56, 2, 3, 55, 54, 53, 7};
    int n = 7;

    cout << longestSubsequene(arr, n);
}