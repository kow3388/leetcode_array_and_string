#include <bits/stdc++.h>

using namespace std;

//想不到
//此為網路上的做法
vector<int> findDiagonalOrder(vector<vector<int>> &mat)
{
    const int row = mat.size();
    const int col = mat[0].size();
    int r = 0, c = 0;

    vector<int> ans(row*col);
    for(int i = 0; i < ans.size(); i++)
    {
        ans[i] = mat[r][c];
        //(r+c)%2決定是在哪一個方向
        if((r+c)%2)
        {
            //由右上往左下，到底條件1(row觸底)
            if(r == row-1)
                c++;
            //由右上往左下，到底條件2(col碰壁)
            else if(c == 0)
                r++;
            //往左下一格
            else
            {
                r++;
                c--;
            }
        }
        //由左下往右上，剛好跟上面相反
        else
        {
            if(c == col-1)
                r++;
            else if(r == 0)
                c++;
            else
            {
                r--;
                c++;
            }
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> ans = findDiagonalOrder(mat);

    for(int a : ans)
        cout << a << endl;

    return 0;
}