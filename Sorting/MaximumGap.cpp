//MaximumGap problem 
//Given a array find the maximum differnece between the two adjacent element if in linear time and space


#include <bits/stdc++.h>
using namespace std;

 int maximumGap(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return 0;

    int digits = log10(*max_element(nums.begin(), nums.end())) + 1;

    int power = 1;

    while (digits--)    //sort the array using radix sort
    {
        vector<int> temp(n);
        vector<int> count(10, 0);

        for (int i = 0; i < n; i++)                //store the each number count at it's index
        {
            int digit = (int)(nums[i] / power) % 10;
            count[digit]++;
        }

        for (int i = 1; i < 10; i++)              //calculate the prefix sum
        {
            count[i] = count[i] + count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--)        //get the element in sorted order in temp array using the count[digit]-1 as index in temp array 
        {
            int digit = (int)(nums[i] / power) % 10;
            temp[count[digit] - 1] = nums[i];
            count[digit]--;
        }

        nums = temp;

        power *= 10;                           //for sorting according to next digit
    }

    int ans = abs(nums[1] - nums[0]);
    for (int i = 1; i < nums.size(); i++)
        ans = max(abs(nums[i] - nums[i - 1]), ans);          //calculate maximum difference

    return ans;
}

int main()
{
    vector<int> arr = {3, 6, 9, 1};
    int n = 4;
  
    cout << maximumGap(arr);
}