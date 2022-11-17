#include <bits/stdc++.h>

using namespace std;

//想不到
//two pointer
int minSubArrayLen(int target, vector<int> &nums)
{
    int i = 0, j = 0, sum = 0;
    int len = INT_MAX;

    while(j < nums.size())
    {
        //先計算prefix sum
        sum += nums[j++];

        //當prefix sum >= target時
        //開始把前面的減掉，看減多少依舊維持 >= target
        while(sum >= target)
        {
            len = min(len, j - i);
            sum -= nums[i++];
        }
    }

    return (len == INT_MAX)? 0 : len;
}

int main()
{
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    int ans = minSubArrayLen(target, nums);

    cout << ans << endl;

    return 0;
}