//find the number of occurence of each elment in the given sorted array 
//approach - find the next element is same as previous if yes then increement the count else print the count and set it to zero

#include<bits/stdc++.h>

using namespace std;


void Printfrequency(int arr[], int n)
{
    int count=1;
    int i=1;
  while(i<n)
  {
    while(i<n && arr[i]==arr[i-1])
    {
         count++;
        i++;
    }

    cout<<arr[i-1]<<"  "<<count <<endl;
    i++;
    count=1;
  }

  if(n==1|| (arr[n-1]!=arr[n-2]))
   cout<<arr[n-1]<<"  "<<1;

}

int main()
{
    int arr[]={2,3,4,4,4,6,6,9};
    int n=8;

    Printfrequency(arr,n);

}



