#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    const int n = digits.size();
    int c = (digits.back() + 1) / 10;
    digits[n-1] = (digits.back() + 1) % 10;

    for(int i = n-2; i >= 0; i--)
    {
        int sum = digits[i] + c;
        c = sum / 10;
        digits[i] = sum % 10;
    }

    if(c)
        digits.insert(digits.begin(), 1);

    return digits;
}

int main()
{
    vector<int> digits = {1, 2, 3};
    vector<int> ans = plusOne(digits);

    for(int a : ans)
        cout << a;
    cout << endl;

    return 0;
}