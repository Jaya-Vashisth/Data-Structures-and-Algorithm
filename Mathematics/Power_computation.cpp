// approach - if n is even then power(x,n/2)*power(x,n/2) else the power will be power(x,n-1)*x

#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    int temp = power(x, n / 2);
    temp = temp * temp;

    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

// efficient way : all the power can be represented as binary representation 
int compute_power(int x, int n)
{
    int result = 1;

    while (n > 0)
    {
        if (n % 2 != 0)
            result = result * x;
        x = x * x;

        n = n / 2;
    }

    return result;
}

int main()
{
    int x, n;
    cout << "Enter the number of which power to be computed : ";
    cin >> x;

    cout << "Enter number of power to be computed : ";
    cin >> n;

    int result = compute_power(x, n);

    cout << "The result is : " << result;
}
