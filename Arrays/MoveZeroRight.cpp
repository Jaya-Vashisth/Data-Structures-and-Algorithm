#include<bits/stdc++.h>

using namespace std;

// void swap(int *x, int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;

// }

void move(int arr[], int n)
{
    int count=0;
   for(int i=0; i<n; i++)  
    {if(arr[i]!=0)
    {
         swap(arr[i],arr[count]);
        count++;
    }
    }  
   

}
int main()
{
   int arr[]={3,4,0,8,5,0,6};
   int n=7;

   move(arr,n);

   for (int i = 0; i < n; i++)
   {
    /* code */cout<<arr[i]<<" ";
   }
   
}