#include <bits/stdc++.h>
using namespace std;

// to check given sum is present is array or not in O(n) time using hash
bool isSum(int arr[], int n, int k)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        // check if the element making some with the given array element present in hash or not
        if (s.find(k - arr[i]) != s.end())
            return true;

        s.insert(arr[i]);   //if not then add in hash 
    }

    return false;
}

int main()
{
    int arr[] = {6, 5, 11};
    int n = 3;   //size
    int k = 10; //sum 

    cout << isSum(arr, n, k);
}