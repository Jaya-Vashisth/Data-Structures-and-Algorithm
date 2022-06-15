#include <bits/stdc++.h>

using namespace std;

int consecutiveOne(int arr[], int n)
{
    int res = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            res = max(count, res);
            count = 0;
        }
    }

    return res;
}
int main()
{
    int arr[] = {1, 1, 0, 0, 1, 1, 1, 1, 0, 1};
    int n = 10;

    cout << consecutiveOne(arr, n);
}