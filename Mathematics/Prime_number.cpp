// naive approach o(n) - by checking whether a number upto n devides the number n . if yes then not prome
// efficient approach - loop upto sqrt(n) as devisor occure in pairs
// more efficient : check the corener cases and loop interval will be of 6


#include <bits/stdc++.h>

using namespace std;


// efficient approach
bool isprime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i < n; i++)

        if (n % i == 0)
            return false;

    return true;
}

// more efficient approach
bool is_prime(int n)
{
    if (n == 1)
        return false;

    if (n % 2 == 0) // Handle the case before going in the loop
        return false;

    if (n % 3 == 0)
        return false;

    for (int i = 5; i * i < n; i = i + 6) // as for i=1,2,3,4 is already handled and in interval have to check for 3 two value as remainging are already handled
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter the number to check whether prime or not : ";
    cin >> n;

    bool result = is_prime(n);

    if (result)
        cout << "The number is prime ";
    else
        cout << "THe number is not prime";
}