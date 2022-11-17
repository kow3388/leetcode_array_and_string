#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int idx = 1;

    for(int i = 1; i < nums.size(); i++)
        if(nums[i] != nums[idx-1])
            nums[idx++] = nums[i];

    return idx;
}

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicates(nums);

    cout << ans << endl;

    return 0;
}