#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinctinWindow(int arr[], int n, int k)
{
    vector<int> res;

    unordered_map<int, int> ar;

    // insert the element in hash table of first window
    for (int i = 0; i < k; i++)
    {
        ar[arr[i]]++;
    }

    res.push_back(ar.size()); // size of hashmap gives the distinct element count

    for (int i = 0; i < n - k; i++)
    {
        // decrease the count of element which is of previous window
        ar[arr[i]]--;

        // if count==0 then remove the element from the hash map
        if (ar[arr[i]] == 0)
            ar.erase(arr[i]);

        // add new element or increase the count if already present
        ar[arr[i + k]]++;

        // size of current hashmap gives the distinct element count
        res.push_back(ar.size());
    }

    return res;
}

int main()
{
    int arr[] = {10, 20, 20, 10, 30, 40, 10};
    int n = 7;
    int k = 4;

    vector<int> res;
    res = countDistinctinWindow(arr, n, k);

    for (auto x : res)
        cout << x << " ";
}