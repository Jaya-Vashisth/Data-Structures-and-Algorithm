#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionOfArray(int a1[], int a2[], int n, int m)
{

    unordered_set<int> s;

    vector<int> result;

    for (int i = 0; i < n; i++)
    {

        s.insert(a1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        if (s.find(a2[i]) != s.end())
        {
            result.push_back(a2[i]);
            s.erase(a2[i]);
        }
    }

    return result;
}

int main()
{
    int a1[]={10,15,20,15,30,30,5};
    int a2[]={30,5,30,8};
    int n=7;
    int m=4;
    vector<int>s;
    s=intersectionOfArray(a1,a2,n,m);

    for(auto x:s)
      cout<<x<<" ";
}