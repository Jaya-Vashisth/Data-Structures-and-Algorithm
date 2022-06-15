//program to print all the prime numbers smaller than the given number

//naive approach : traverse upto n and chek the number is prime or not

/*efficient way : 
consider a boolean array of size n+1;
check each index value marked true or not if  yes then mark all the multiple of value false in the array starting from value*2 upto n
print the index having values true*/

/* more efficient approach 
consider the same boolean array
instead for starting the inner loop from 2*value start with value*value as value*(less than value) are already considered 
outer loop will be upto n instead of sqrt(n)
*/



#include<bits/stdc++.h>

using namespace std;

void sieve(int n)
{
    vector<bool>isprime(n+1, true);

    for(int i=2; i*i <=n; i++)
    {
        if(isprime[i])
        {
          for(int j=2*i; j<=n; j=j+i)
            isprime[j]=false;
        }

    }

    for( int i= 2; i<=n; i++)
       if(isprime[i])
         cout<<i<<" ";
}


//more effiecient approach
void  eff_sieve(int n)
{
    vector<bool>isprime(n+1, true);

    for(int i=2; i<=n; i++)
    {
        if(isprime[i])
        {
            cout<<i<<" ";
          for(int j= i*i ; j<=n ; j=j+i)
            isprime[j]=false;
        }

      
    }
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;

     sieve(n);
    cout<<endl;
    // eff_sieve(n);


}