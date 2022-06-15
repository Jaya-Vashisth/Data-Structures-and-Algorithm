#include<bits/stdc++.h>

using namespace std;

 unsigned int getFirstSetBit(int n)
    {
        if(n==0)
          return 0;
          
      int count=1;
       
      while(n>0)
      {
          if( ( n & 1 )!=0)
         {
            return count;
         }
       count++;
       n=n>>1;
      }
      
      return count;
    }


int main()
{

   int n=9;
   
   unsigned int k= getFirstSetBit(n);

  cout<<k;

}
