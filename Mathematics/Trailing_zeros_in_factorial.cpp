#include <bits/stdc++.h>
using namespace std;
// naive approach - computing factorial and then computing number of zeros but it creates overflow problem

// efficient - count number of 2*5 pair in prime factorization of the number as n(2)<n(5) --> n(5) gives number of zeros



int count_trailing_zeros(int n)
{
    int result = 0;

    for (int i = 5; i <= n; i=i*5)

        result += n / i;

    return result;
}


int main()
{ 
   int n;
   cout<<"enter the number ";
   cin>>n;

   int zeros= count_trailing_zeros(n);
   cout<<"The number of trailing zeros "<<zeros;

}