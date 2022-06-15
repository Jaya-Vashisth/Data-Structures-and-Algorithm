//approach - find the leftmax and rightmax of each element (min of both the value- element ) give the water that can be stored on that place.. add the obtained answer of each element


#include<bits/stdc++.h>

using namespace std;

int maxWater(int arr[], int n)
{
    int twater=0; 

    int lmax[n];
    lmax[0]=arr[0];
 
    for(int i=1; i<n; i++)
     {
        lmax[i]= max(lmax[i-1], arr[i]);

     }

     int rmax[n];
     rmax[n-1]=arr[n-1];

     for(int i=n-2; i>=0; i--)
     {
        rmax[i]= max(rmax[i+1], arr[i]);
     }
    
     for(int i=0 ; i< n ; i++)
     {
        twater= twater+ (min(lmax[i],rmax[i])-arr[i]);
     }

     return twater;


}

int main()
{ 
    int arr[]={3,0,1,2,5};
    int n=5;

    cout<<maxWater(arr,n);

}