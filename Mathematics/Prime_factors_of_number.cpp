// Naive approach: check each number from 1 to n is prime or not if yes then check if it devides n
// efficient approach : outer loop can be upto sqrt(n) as all devisor occur in pair

#include <bits/stdc++.h>

using namespace std;

// efficient way
void prime_factor(int n)
{
    if (n <= 1)
        return;

    for (int i = 2; i * i <= n; i++) // loop to traverse upto sqrt(n)
    {
        while (n % i == 0) // handle how many power of number is include in prime factorisation
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 1)
        cout << n;
}

// more efficient approach
void prime_factorisaction(int n)
{
    if (n <= 1)
        return;

    while (n % 2 == 0)                     //handle all the 2's in starting as prime factor
    {
        cout << 2 << " ";
        n = n / 2;
    }

    while (n % 3 == 0)                    //handle power of three
    {
        cout << 3 << " ";
        n = n / 3;
    }
 
    for (int i = 5; i * i <= n; i = i + 6)          //i=2,3,4 is already handled start from 5 
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }

        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n = n / (i + 2);
        }
    }

    if (n > 3)
        cout << n;
}

int main()
{
    prime_factor(2630884);
    cout << endl;
    
}
