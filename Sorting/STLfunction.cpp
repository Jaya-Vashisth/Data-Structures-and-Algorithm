#include <bits/stdc++.h>

using namespace std;

class a
{
public:
    int x, y;
};

bool mycomparision(a a1, a a2)
{

    return a1.x < a1.y;
}

int main()
{
    int arr[] = {4, 3, 2, 7, 8, 5, 1};
    a ad[] = {{2, 3}, {1, 4}, {5, 2}};
    int n = sizeof(arr) / sizeof(arr[0]);

    int size = sizeof(ad) / sizeof(ad[0]);

    sort(arr, arr + n); // increasing order

    for (int x : arr)
        cout << x << " ";

    cout << endl;

    sort(arr, arr + 7, greater<int>()); // decreasing order

    for (int x : arr)
        cout << x << " ";

    cout << endl;

    sort(ad, ad + size, mycomparision); // sort by the function as per wish

    for (a a1 : ad)
        cout << a1.x << "," << a1.y << "  ";
}