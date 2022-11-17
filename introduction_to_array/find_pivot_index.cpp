#include <bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    int curr_sum = 0;

    for(int i = 0; i < nums.size(); i++)
        if((curr_sum*2) == (total_sum - nums[i]))
            return i;
        else
            curr_sum += nums[i];

    return -1;
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6};
    int ans = pivotIndex(nums);

    cout << ans << endl;

    return 0;
}