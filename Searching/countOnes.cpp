//program to return the first occurence of an element in the sorted array 

#include<bits/stdc++.h>

using namespace std;


//binary search approach 
int countOnes(int arr[],int n)     
{
    int low=0;
    int high=n-1;


    int mid=0;

    while(low<=high)           
  {
    mid= (low+high)/2;

   if(arr[mid]!=1)
      low=mid+1;
   else
    {
        if(arr[mid-1]==0|| mid==0)
          return n-mid;
        else
          high=mid-1;
    }
  }

  return -1;

}


int main()
{
    int arr[]={0,0,1,1,1};
    int n=5;

    cout<<countOnes(arr,n);
}