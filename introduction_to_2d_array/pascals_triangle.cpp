#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;

    for(int i = 1; i <= numRows; i++)
    {
        vector<int> tmp;
        for(int j = 0; j < i; j++)
        {
            if(j == 0 or j == i-1)
                tmp.push_back(1);
            else
                tmp.push_back(ans.back()[j-1]+ans.back()[j]);
        }
        ans.push_back(tmp);
    }

    return ans;
}

int main()
{
    int row = 5;
    vector<vector<int>> ans = generate(row);

    for(auto r : ans)
    {
        for(auto v : r)
            cout << v << " ";
        cout << endl;
    }

    return 0;
}