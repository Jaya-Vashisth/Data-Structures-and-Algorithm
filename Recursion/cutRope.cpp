#include<bits/stdc++.h>

using namespace std;
int maxpieces(int n , int a,int b,int c)
{
    if(n==0) 
    return 0;
    if(n<0) 
    return -1;

    int res = max({maxpieces(n-a,a,b,c),maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c)});
    if(res==-1)
    return -1;

    return res+1;
}
int main()
{
    int  n,a,b,c;
    cout<<"Enter your no";
    cin>>n>>a>>b>>c;
     int res= maxpieces(n,a,b,c);

     cout<<res;
    return 0;
}