#include <bits/stdc++.h>

using namespace std;

int arrayPairSum(vector<int> &nums)
{
    int sum = 0;

    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i += 2)
        sum += nums[i];

    return sum;
}

int main()
{
    vector<int> nums = {6,2,6,5,1,2};
    int ans = arrayPairSum(nums);

    cout << ans << endl;

    return 0;
}