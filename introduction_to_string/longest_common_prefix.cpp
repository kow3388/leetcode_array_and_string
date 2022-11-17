#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans;

    for(int i = 0; i < strs[0].size(); i++)
    {
        for(int j = 0; j < strs.size(); j++)
            if(strs[0][i] != strs[j][i])
                return ans;
        ans.insert(ans.end(), strs[0][i]);
    }

    return ans;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    string ans = longestCommonPrefix(strs);

    cout << ans << endl;

    return 0;
}