#include <bits/stdc++.h>

using namespace std;

//我的寫法，用inplace
void moveZeroes1(vector<int> &nums)
{
    int idx = 0;

    for(int i = 0; i < nums.size(); i++)
        if(nums[i] != 0)
            nums[idx++] = nums[i];

    for(int i = idx; i < nums.size(); i++)
        nums[i] = 0;
}

//網路上其他人的寫法，用swap
void moveZeroes(vector<int> &nums)
{
    const int n = nums.size();
    for(int i = 0, j = 0; i < n; i++)
        if(nums[i] != 0)
            swap(nums[i], nums[j++]);
}

int main()
{
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);

    for(auto n : nums)
        cout << n << endl;

    return 0;
}