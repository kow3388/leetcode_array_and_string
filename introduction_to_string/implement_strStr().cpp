#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle)
{   
    const int l1 = haystack.length();
    const int l2 = needle.length();

    if(l1 < l2)
        return -1;

    for(int i = 0; i < l1; i++)
    {
        for(int j = 0; j < l2; j++)
        {
            if(haystack[i+j] != needle[j])
                break;
            
            if(j == l2-1 and haystack[i+j] == needle[j])
                return i;
        }
    }

    return -1;
}

int main()
{
    string s1 = "sadbutsad";
    string s2 = "sad";
    int ans = strStr(s1, s2);

    cout << ans << endl;

    return 0;
}