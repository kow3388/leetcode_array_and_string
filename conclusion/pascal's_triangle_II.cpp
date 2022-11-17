#include <bits/stdc++.h>

using namespace std;

//我的寫法
vector<int> getRow(int rowIndex)
{
    vector<int> ans = {1};

    for(int i = 1; i <= rowIndex; i++)
    {
        int tmp1 = ans[0];
        for(int j = 1; j < i; j++)
        {
            int tmp2 = tmp1;
            tmp1 = ans[j];
            ans[j] += tmp2;
        }
        ans.push_back(1);
    }

    return ans;
}

//網路上我的方法space優化
vector<int> getRow1(int rowIndex)
{
    vector<int> ans(rowIndex+1, 1);

    if(rowIndex <= 1)
        return ans;

    for(int i = 2; i <= rowIndex; i++)
        for(int j = i-1; j > 0; j--)
            ans[j] += ans[j-1];

    return ans;
}

//網路上其他寫法
//證明https://leetcode.com/explore/learn/card/array-and-string/204/conclusion/1171/discuss/1203260/Very-easy-O(N)-time.-0-ms-beats-100-(simple-maths)-ALL-LANGUAGES
vector<int> getRow2(int rowIndex)
{
    vector<int> ans(rowIndex+1);
    ans[0] = ans[rowIndex] = 1;

    long tmp = 1;
    int up = rowIndex, down = 1;

    for(int i = 1; i < rowIndex; i++)
    {
        tmp = tmp*(up--)/(down++);
        ans[i] = tmp;
    }

    return ans;
}

int main()
{
    int rowIndex = 3;
    vector<int> ans = getRow2(rowIndex);

    for(auto a : ans)
        cout << a << endl;
    
    return 0;
}