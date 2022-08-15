#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n)      
{
    bool swapped = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])                             //compare adjacent element ans swap if current is greater than next
                swap(arr[j], arr[j+1]);

            swapped = true;
        }
    }

    if (!swapped)
        return;
}

int main()
{
    int arr[] = {3, 2, 5, 7, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int x : arr)
        cout << x << " ";

    cout<<endl;    

    bubbleSort(arr, n);

    for (int x : arr)
        cout << x << " ";
}