//program to find the largest and second largest element of the array

#include<bits/stdc++.h>
using namespace std;


int largest(int arr[], int n)
{
    int max=0;   //store the index of element having maximum value

    for(int i=1; i<n ; i++)       
    {
        if(arr[i]>arr[max])
         max= i; 
    }

    return max;
}

int secondLargest(int arr[], int n)
{
    int largest=0;
    int result=-1;     //index of second largest value 

    for(int i=1; i<n; i++ )
    {
        if(arr[i]>arr[largest])        
          {
            result=largest;
            largest=i;

          }
        else 
          if (result==-1 || arr[i]>arr[result])
          {
                result=i;
          }
    }

    return result;

}
using namespace std;

int main(){

 int arr[]={3,4 ,22 ,6,2,8};
 int n= 6;
 
 int maxi= largest(arr, n);
 cout<<maxi<<"  ";
 int sec_larges= secondLargest(arr,n);
 cout<<sec_larges;
}