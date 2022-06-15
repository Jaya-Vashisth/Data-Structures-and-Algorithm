#include<bits/stdc++.h>
using namespace std;

bool ispower(int n)
{
    if(n==0)
      return false;
    
    return ((n & (n-1))==0);
}

int main()
{   int n;
    
    cout<<"Enter the number : ";
    cin>>n;

    bool result= ispower(n);

    if(result)
       cout<<"yes";
    else 
       cout<<"No";

}