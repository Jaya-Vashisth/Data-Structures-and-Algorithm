#include<bits/stdc++.h>
using namespace std;

int longestspan(int a1[],int a2[],int n)
{
    int arr[n];

    for(int i=0 ; i<n ; i++)
      arr[i]=a1[i]-a2[i];

    unordered_map<int,int>s;
    int pre_sum=0;
    int res=0;

    for(int i=0 ; i<n ; i++)
    {
        pre_sum+=arr[i]; 
        
        
        //if the sum equals to prefix sum
        if(pre_sum==0)
          res=i+1;
        
        //isert the prefix sum and index if it is not in the hash(so that duplicate pre_sum with small subarray not included)
        if(s.find(pre_sum)==s.end())
          s.insert({pre_sum,i});

        //case when a subarray have prefix sum equal to given sum -->implies prefix_sum till here - sum already present in hash
        if(s.find(pre_sum)!=s.end())
         {
            res=max(res,i-s[pre_sum]);
         }
      
    }

    return res;
}

int main()
{
    int a1[]={0,1,0,0,0,0};
    int a2[]={1,0,1,0,0,1};
    int n=6;

    cout<<longestspan(a1,a2,n);

}