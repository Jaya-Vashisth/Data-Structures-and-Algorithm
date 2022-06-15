// naive approach - Rotate the array d time one by one
// efficient approach(reversal algorithm) - Reverse the 0 to d-1 element , Reverse the d to n-1 element and then reverse the whole array

#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

void rotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);

    reverse(arr, d, n - 1);

    reverse(arr, 0, n - 1);
}

int main()
{
    int n, d = 0;

    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements in the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "How many times you want to rotate the array : ";
    cin >> d;

    rotate(arr, n, d);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}