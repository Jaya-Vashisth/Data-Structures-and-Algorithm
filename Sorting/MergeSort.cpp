// program to sort the array using merge sort algorithm in o(nlogn) time
#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int  l, int mid, int h)
{

    int n1 = mid - l + 1;
    int n2 = h - mid;

    int a1[n1], a2[n2];

    for (int i = 0; i < n1; i++)                   //copy left half elements
        a1[i] = arr[i + l];                        

    for (int i = 0; i < n2; i++)                  //copy righ half elements
        a2[i] = arr[mid + i + 1];
    


    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)                    //insert the elements in sorted order in array
    {
        if (a1[i] <= a2[j])                    
        {
            arr[k] = a1[i];
            i++;
        }
        else
        {
            arr[k] = a2[j];
            j++;
        }

        k++;
    }

    while (i < n1)                            //copy the remaining left half elements if any 
    {
        arr[k] = a1[i];
        k++;
        i++;
    }

    while (j < n2)                          //copy the remaining right half elements if any
    {
        arr[k] = a2[j];
        k++;
        j++;
    }

    return;

}

void mergeSort(int arr[], int l, int h)
{
    

   
}

int main()
{
    int arr[] = {3, 2, 5, 7, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int x : arr)
        cout << x << " ";

    cout <<endl;

    mergeSort(arr, 0, n);

    for (int x : arr)
        cout << x << " ";
}
