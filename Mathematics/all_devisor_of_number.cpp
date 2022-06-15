#include<bits/stdc++.h>

using namespace std;

//in unsorted order 
void print_devisor(int n)
{ 
    for(int i=1; i*i<=n; i++)       //traverse upto sqrt(n)
    {
        if(n%i==0)
        { cout<<i<<" ";            

          if(i!=n/i)                       //so that a number dont repeat
           cout<< (n/i)<< " ";
        }
    }
}

// in sorted order
void all_devisor(int n)
{   int i=1;

    for(i=1; i*i<=n; i++)
     {
         if(n%i==0)
          cout<<i<<" ";
     }

     
    // i--;


    for(; i>=1; i--)
    {
        if(n%i==0)
        cout<<n/i<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter the number to find all devisors : ";
    cin>>n;

    cout<<"in unsorted order"<<endl;
    print_devisor(n);

    cout<<endl<<"in sorted order\n";
    all_devisor(n);
}