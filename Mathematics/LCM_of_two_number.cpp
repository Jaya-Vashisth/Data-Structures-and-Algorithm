#include<bits/stdc++.h>
using namespace std;

// naive approach : check if largest of two devided both the number if yes then that's the lcm
//   2. check which number devided both the number by increementing the largest value every time

//efficient method: hcf(a,b)*lcm(a,b)= a*b

int gcd(int a, int b)
{
    if(b==0)
       return a;
    else return gcd(b,a%b);
    
}

int find_lcm(int a, int b)
{
    return ((a*b)/gcd(a,b));

}



int main()
{

    int a, b;

    cout<<"enter the numbers to find the lcm : ";
    cin>>a>>b;

    int result= find_lcm(a,b);
    cout<<"LCM of two numbers is : "<<result;

}