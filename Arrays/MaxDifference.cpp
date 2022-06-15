//Problem - the differe of two elements a[j]-a[i] should be greatest such that j>i;
//approach - find the difference of the element with the smallest element upto that element and compare with the others difference 



#include <bits/stdc++.h>

using namespace std;

int maxdifference(int arr[],int n)
{
    int res= 0;
    int minval=arr[0];

    for(int i=1; i<n ; i++)
    {
             res= max((arr[i]-minval),res);
             minval= min(arr[i],minval);       
    }

    return res;
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


  cout<<maxdifference(arr,n);
   
}