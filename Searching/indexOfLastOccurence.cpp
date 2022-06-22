//program to return the last occurence of an element in the sorted array 

#include<bits/stdc++.h>

using namespace std;


//binary search approach 
int firstOccurrence(int arr[],int n, int x)     
{
    int low=0;
    int high=n-1;


    int mid=0;

    while(low<=high)           
  {
    mid= (low+high)/2;

    if(arr[mid]==x && (arr[mid+1]!=x || mid==n-1))
        return mid;
    else if(x<arr[mid])
      high=mid-1;
    else 
      low=mid+1;     
  }

  return -1;

}


int main()
{
    int arr[]={1,2,2,2,4};
    int n=5;

    cout<<firstOccurrence(arr,n,2);
}