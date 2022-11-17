#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int i = 0, j = numbers.size() - 1;

    while(i < j)
    {
        int sum = numbers[i] + numbers[j];

        if(sum > target)
            j--;
        else if(sum < target)
            i++;
        else
            return {i+1, j+1};
    }

    return {};
}

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);

    for(auto a : ans)
        cout << a << endl;
    
    return 0;
}