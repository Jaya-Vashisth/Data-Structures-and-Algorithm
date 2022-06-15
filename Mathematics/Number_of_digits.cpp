
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// iterative solution

int number_of_digits(int n)
{
    int count = 0;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

// recursive approach
int number_of_digits_recursive(int n)
{
    if (n == 0)
        return 0;

    return 1 + number_of_digits_recursive(n / 10);
}

// logarithmic soln
int number_of_digits_log(long n)
{
    return (log10(n) + 1);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int d = number_of_digits(n);
    cout << endl
         << "Number of digits  " << d;

    d = number_of_digits_recursive(n);
    cout << endl
         << "Number of digits  " << d;

    d = number_of_digits_log(n);
    cout << endl
         << "Number of digits  " << d;
}
