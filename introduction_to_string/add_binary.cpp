#include <bits/stdc++.h>

using namespace std;

string addBinary(string a, string b)
{
    int i = a.size() - 1, j = b.size() - 1;
    int c = 0;
    string ans;

    while(i >= 0 or j >= 0)
    {
        int tmp_a = (i < 0)? 0 : a[i--] - '0';
        int tmp_b = (j < 0)? 0 : b[j--] - '0';

        ans.insert(ans.begin(), char(tmp_a^tmp_b^c + '0'));
        c = tmp_a&tmp_b | tmp_a&c | tmp_b&c;
    }

    if(c)
        ans.insert(ans.begin(), char(1 + '0'));

    return ans;
}

int main()
{
    string a = "1010";
    string b = "1011";
    string ans = addBinary(a, b);

    cout << ans << endl;

    return 0;
}