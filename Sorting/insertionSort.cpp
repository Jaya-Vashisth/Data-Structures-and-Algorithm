#include <bits/stdc++.h>

using namespace std;


//insertionSort 
void insertionSort(int arr[], int n)
{
    //traverse whole array 
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];

        while (j >= 0 && arr[j] > key)       //compare each element with the already sorted elements 
        {
            arr[j + 1] = arr[j];            
            j--;
        }

        arr[j + 1] = key;                   //place element at it's position in sorted array
    }
}

int main()
{
    int arr[] = {3, 2, 5, 7, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int x : arr)
        cout << x << " ";

    cout << endl;

    insertionSort(arr, n);

    for (int x : arr)
        cout << x << " ";
}