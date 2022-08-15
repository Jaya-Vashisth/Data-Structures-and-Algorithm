//approach - two pointer approach on the sorted array is used compare the sum of two side with the other side by taking two pointer one just next to the selected side and one from the last 


#include<bits/stdc++.h>
using namespace std;

  int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr,arr+n);
        int count=0;

        // for(int i=0 ; i<n-1; i++)
        // {
        //     int j=i+1;
        //     int k=n-1;

        //     cout<<i;

        //     while(j<k)
        //     {
        //         if((arr[i]+arr[j]) > arr[k])
        //             {
        //                 count+=k-j;
        //                 j++;
        //                 k=n-1;
        //             }
        //         else
        //         {
        //             k--;     
        //         }
        //      }
        // }
        
      sort(arr,arr+n);
        int count=0;
        
        for(int i=n-1; i>=2; i--)            //traverse with the every side upto n-2
        {
            int j=0;                         
            int k=i-1;
            
            while(j<k)
            {
                if(arr[i]<arr[j]+arr[k])
                    {
                        count=count+k-j;           
                        k--;
                        j=0;
                    }
                else
                {
                    j++;
                    
                }
            }
        }
        
        return count;
        
        // code here
    }

    int main()
    {
        int arr[]={4,26,23,4};
        int n=4;

        cout<<findNumberOfTriangles(arr,n);
    }