#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    //reverse the array
    reverse(digits.begin(), digits.end());
    vector<int> ans;
    //initialize carry to 1
    int carry = 1;
    for (int i = 0; i < digits.size(); i++)
    {
        int sum = digits[i] + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
    }
    //if carry is there push to result vector
    while (carry)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }
    //remove and zeros present at the start
    while (ans[ans.size() - 1] == 0 && ans.size() > 1)
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    reverse(digits.begin(), digits.end());
    return ans;
}

int main()
{
    vector<int> v{0, 0, 9, 9, 9, 9};
    vector<int> ans = plusOne(v);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}