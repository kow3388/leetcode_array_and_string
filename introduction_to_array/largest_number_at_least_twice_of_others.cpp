#include <bits/stdc++.h>

using namespace std;

int dominantIndex(vector<int> &nums)
{
    pair<int, int> m1 = {INT_MIN, -1};
    int m2 = INT_MIN;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > m1.first)
        {
            m2 = m1.first;
            m1 = {nums[i], i};
        }
        else if(nums[i] > m2)
            m2 = nums[i];
    }

    return (m1.first >= m2*2)? m1.second : -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int ans = dominantIndex(nums);

    cout << ans << endl;

    return 0;
}