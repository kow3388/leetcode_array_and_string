#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s)
{
    const int n = s.length();
    int start = 0, end = 0;

    for(int i = 0; i < n; i++)
    {
        start = end = i;
        if(s[i] == ' ')
            continue;
        
        while(end < n and s[end] != ' ')
            end++;
        
        reverse(s.begin() + start, s.begin() + end);
        start = i = end;
    }

    return s;
}

int main()
{
    string s = "Let's take LeetCode contest";
    string ans = reverseWords(s);

    cout << ans << endl;

    return 0;
}