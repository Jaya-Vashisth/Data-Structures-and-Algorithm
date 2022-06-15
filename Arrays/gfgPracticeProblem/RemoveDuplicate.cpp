#include<bits/stdc++.h>

using namespace std;
  
//efficient way - compare the current element to element present at index result which is non duplicate
int removeDuplicate(int arr[], int n)
{
    int res=0;

    for(int i=0;i<n; i++)
    {
        if(arr[i]!=arr[res])
        {   
            arr[res]=arr[i];
            res++;
            
        }
    }
    return res;

}

int main()
{
    int arr[]={3,4,5,5,6,6,7};
    int n= 7;
     
    int res= removeDuplicate(arr,n);

    cout<<res;


}