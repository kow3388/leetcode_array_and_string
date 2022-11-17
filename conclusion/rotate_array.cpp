#include <bits/stdc++.h>

using namespace std;

//Time: O(n), space: O(n)
void rotate(vector<int> &nums, int k)
{
    k %= nums.size();
    
    if(nums.size() == 1 or k == 0)
        return;
    else
    {
        vector<int> tmp(k);
        for(int i = 0; i < k; i++)
            tmp[i] = nums[nums.size()-k+i];

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(i >= k)
                nums[i] = nums[i-k];
            else
                nums[i] = tmp[i];

        }
    }
}

//網路上其他解法
void rotate1(vector<int> &nums, int k)
{
    //假設k = 3
    k = k % nums.size();
    //先把全部反轉[1, 2, 3, ..., n] => [n, n-1, ..., 1]
    reverse(nums.begin(), nums.end());
    //只反轉前面k個
    //[n-2, n-1, n, n-3, n-4, ..., 1]
    reverse(nums.begin(), nums.begin()+k);
    //在把後面反轉就完成
    //[n-2, n-1, n, 1, 2, 3, ..., n-3]
    reverse(nums.begin()+k, nums.end());
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    rotate(nums, k);
    for(int n : nums)
        cout << n << endl;

    return 0;
}