#include <bits/stdc++.h>

using namespace std;

//Time: O(n), space: O(n)
string reverseWords1(string s)
{
    istringstream is(s);
    stack<string> rev;
    string ans, tmp;

    while(is >> tmp)
    {
        rev.push(tmp);
        rev.push(" ");
    }
    rev.pop();

    while(!rev.empty())
    {
        ans.append(rev.top());
        rev.pop();
    }

    return ans;
}

string reverseWords(string s)
{
    //先把整個string reverse，使單字順序顛倒
    reverse(s.begin(), s.end());
    int n = s.length();
    //單字的起點和終點
    int strt = 0, end = 0;
    //目前看的位置
    int itrtr = 0;

    while(itrtr < n)
    {
        //找出單字
        while(itrtr < n and s[itrtr] != ' ')
            s[end++] = s[itrtr++];
        
        if(strt < end)
        {
            //把單一個單字reverse成原來的樣子
            reverse(s.begin() + strt, s.begin() + end);
            //如果是最後一個單字則結束
            if(end == n)
                break;
            
            //不然則塞一個空格
            s[end++] = ' ';
            strt = end;
        }
        itrtr++;
    }

    //檢查是否有多餘的空格
    if(end > 0 and s[end-1] == ' ')
        s.resize(end-1);
    else
        s.resize(end);

    return s;
}

int main()
{
    string s = "  hello  world  ";
    string ans = reverseWords(s);

    cout << ans << endl;

    return 0;
}