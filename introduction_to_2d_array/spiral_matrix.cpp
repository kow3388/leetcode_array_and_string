#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    const int row = matrix.size();
    const int col = matrix[0].size();
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;
    int r = 0, c = 0, dir = 0;
    vector<int> ans;

    while(left <= right and top <= bottom)
    {
        switch(dir)
        {
        case 0:
            for(int j = left; j <= right; j++)
                ans.push_back(matrix[r][c++]);
            
            c--;
            r++;
            top++;
            dir = 1;
            break;
        case 1:
            for(int j = top; j <= bottom; j++)
                ans.push_back(matrix[r++][c]);
            
            r--;
            c--;
            right--;
            dir = 2;
            break;
        case 2:
            for(int j = right; j >= left; j--)
                ans.push_back(matrix[r][c--]);
            
            c++;
            r--;
            bottom--;
            dir = 3;
            break;
        case 3:
            for(int j = bottom; j >= top; j--)
                ans.push_back(matrix[r--][c]);
            
            r++;
            c++;
            left++;
            dir = 0;
            break;
        default:
            break;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    vector<int> ans = spiralOrder(matrix);

    for(auto a : ans)
        cout << a << endl;

    return 0;
}