#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int i = 0, j = nums.size() - 1;
    int cnt = 0;

    while(i <= j)
    {
        if(nums[j] == val)
        {
            j--;
            cnt++;
        }
        else if(nums[i] == val)
        {
            nums[i++] = nums[j--];
            cnt++;
        }
        else
            i++;
    }
    
    return nums.size() - cnt;
}

//網路上其他人的寫法
int removeElement1(vector<int> &nums, int val)
{
    int j = 0;

    for(int i = 0; i < nums.size(); i++)
        if(nums[i] != val)
            nums[j++] = nums[i];

    return j;
}

int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int ans = removeElement(nums, val);

    cout << ans << endl;

    return 0;
}