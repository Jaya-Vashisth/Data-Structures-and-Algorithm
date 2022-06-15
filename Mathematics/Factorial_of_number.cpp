#include <bits/stdc++.h>

using namespace std;

// iterative solution

int factorial(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; i++)
        fact = fact * i;

    return fact;
}

// recursive solution

int fact_rec(int n)
{
    if (n == 1)
        return 1;

    return n * fact_rec(n - 1);
}
int main()
{
    int n;
    cout << "enter number ";
    cin >> n;

    int fact = factorial(n);

    cout << "Factorial of number is " << fact;
}