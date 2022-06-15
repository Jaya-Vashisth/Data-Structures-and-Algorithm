#include<bits/stdc++.h>

using namespace std;

//naive approach- gcd always smaller then the smallest number between the given two numbers so traverse in reverse order upto 1 from smallest number and check which number devides both the number

//efficient way : euclidian algorithm

int gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
          a=a-b;
        else 
          b=b-a;

    }

    return a;
}


//optimized solution
int gcd_optimized(int a, int b)
{
     if(b==0)
       return a;
    else return gcd_optimized(b,a%b);
}


int main()
{
   int a, b;

   cout<<"Enter the number to find gcd ";
   cin>>a>>b;

   int result= gcd(a,b);
   cout<<"gcd : "<<result<<endl;

   result= gcd_optimized(a,b);
   cout<<"gcd using optimized approach "<<result;

}