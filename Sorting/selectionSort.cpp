#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int minindex = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minindex]) // compare adjacent element ans swap if current is greater than next
                minindex = j;
        }

        swap(arr[minindex], arr[i]);
    }
}

int main()
{
    int arr[] = {3, 2, 5, 7, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int x : arr)
        cout << x << " ";

    cout << endl;

    selectionSort(arr, n);

    for (int x : arr)
        cout << x << " ";
}