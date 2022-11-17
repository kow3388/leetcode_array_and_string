#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int cnt = 0, tmp_cnt = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 1)
            cnt = max(cnt, ++tmp_cnt);
        else
            tmp_cnt = 0;
    }

    return cnt;
}

int main()
{
    vector<int> nums = {1,0,1,1,1,0,1};
    int ans = findMaxConsecutiveOnes(nums);

    cout << ans << endl;

    return 0;
}