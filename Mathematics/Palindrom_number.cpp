#include <bits/stdc++.h>

using namespace std;

bool check_palindrom(int n)
{
    int reverse = 0;
    int x = n;

    while (x != 0) // find reverse of the number
    {
        int d = x % 10;
        reverse = reverse * 10 + d;
        x = x / 10;
    }

    if (reverse == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "enter number ";
    cin >> n;

    bool t = check_palindrom(n);

    if (t)
        cout << "yes the number is palindrom";
    else
        cout << "No the number is not palindrom";
}