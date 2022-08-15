#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int>s(arr,arr+n);

    return s.size();
}

int main()
{
    int arr[]={3,3,4,2,1,5,2};
    int size=7;

    cout<<countDistinct(arr,size);

}