#include<bits/stdc++.h>
using namespace std;


void reverse(int arr[],int n)
{   int low=0, high=n-1;

    while(low<high)
    {
        // swap(arr[low],arr[high]);
        int temp= arr[low];
        arr[low]=arr[high];
        arr[high]=temp;

        low++;
        high--;

    }

}
int main()
{
    
     int arr[]={3,4,5,7,8};
     int n=5;

     reverse(arr,5);

     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
        /* code */
     }
     
}