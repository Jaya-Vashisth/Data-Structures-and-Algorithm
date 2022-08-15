//approach: if a1,a2,a3,...ai,a(i+1),a(i+2),...a(j),a(aj+1) is prefix sum and ai+...+aj==0 then prefix sum upto a(i-1)==a(j+1)

#include<bits/stdc++.h>
using namespace std;


//return whether the subarray present in the array with zero sum
bool isZeroSum(int arr[], int n)
{
    unordered_set<int>s;
    int pre_sum=0;

    for(int i=0 ; i<n ; i++)
    {
        pre_sum+=arr[i];

        if(s.find(pre_sum)!=s.end())
          return true;
        if(pre_sum==0)
          return true;

        s.insert(pre_sum);
    }

    return false;
}


int main()
{
    int arr[]={-3,-1,-2,3,7};
    int n=5;

    cout<<isZeroSum(arr,n);
}