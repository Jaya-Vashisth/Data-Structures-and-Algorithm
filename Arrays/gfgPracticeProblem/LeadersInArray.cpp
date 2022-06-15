//find the elements of which all the right side elements are smaller than that element
//approach- take right almost element as leader then compare each element with the value in reverse order if greate than leader than print the element
//and update the leader 


#include <bits/stdc++.h>

using namespace std;

void findLeaders(int arr[], int n)
{
    int leader= arr[n-1];

    cout<<leader<<" ";

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>leader)
          {
             leader= arr[i];
             cout<<leader<<" ";
          }
    }
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

    findLeaders(arr,n);


   
}