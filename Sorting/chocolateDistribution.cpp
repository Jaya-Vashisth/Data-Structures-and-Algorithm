#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{

    int i = m - 1;

    sort(a.begin(), a.end());

    long long res = INT_MAX;

    for (i = m - 1; i < n; i++)
    {
        res = min(a[i] - a[i - m + 1], res);
    }

    return res;
    // code
}

int main()
{
    vector<long long> arr = {3, 4, 1, 9, 56, 7, 9, 12};

    long long n = 8;
    long long m = 5;

    cout << findMinDiff(arr, n, m);
}