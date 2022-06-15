//naive approach - right shift the number upto k-1 then and with 1
//               - left shift the 1 upto k-1 then and with number give 


#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,k;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter which bit to check : ";
    cin>>k;

    if((n>>(k-1) & 1)!=0)
      cout<<"Yes the bit is set";
    else 
      cout<<"No the bit is not set";
}