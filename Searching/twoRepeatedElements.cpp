#include <bits/stdc++.h>
using namespace std;

vector<int> twoRepeated(int arr[], int N)
{

    vector<int> result;

    for (int i = 0; i < N; i++)
    {
        if (arr[abs(arr[i]) - 1] > 0)             //mark the element visited by putting the value negative at it's index 
        {
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
        else                                   //if the element at index is already negative than it is visited again
        {
            result.push_back(abs(arr[i]));
        }
    } // Your code here

    return result;
}

int main()
{
    int arr[] = {1, 2, 1, 3, 4, 3};
    int n = 6;

    vector<int> t;

    t = twoRepeated(arr, n);

    for (int i = 0; i < t.size(); i++)
        cout << t[i] << " ";
}