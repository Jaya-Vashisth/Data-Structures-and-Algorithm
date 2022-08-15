#include<bits/stdc++.h>
using namespace std;

   int partition(int arr[],int l, int r)
    {  
        int pivot=arr[r];
        int j=l-1;
        int i=l;
        
        for(i=l; i<r; i++)
        {
            if(arr[i]<pivot)
            {
                j++;
                swap(arr[j],arr[i]);
            }
            
        }
        
        swap(arr[j],arr[r]);
        
        return j+1;
    }
    
    int kthSmallest(int arr[], int l, int r, int k) {

        int n=r+1;
        //code here
       if(l<r)
        {
            int v= rand()%n;
            
            swap(arr[v],arr[r]);
            
            int p=partition(arr,l,r);
            
            if(p==k-1)
              return arr[p];   
            else  if(p<k-1)
                     kthSmallest(arr,p+1,r,k);
            else
                     kthSmallest(arr,l,p-1,k);
        }
        
    }
int main()
{
   int arr[]={ 7, 10 ,4 ,20, 15}   ;
   int n=5;

   cout<<kthSmallest(arr,0,4,2);
}