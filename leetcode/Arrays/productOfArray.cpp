#include <bits/stdc++.h>
using namespace std;

vector<int> product(vector<int> &nums)
{
    vector<int> res;
    int prod = 1, hasZero = 0, idx = 0;
    for (int x = 0; x < nums.size(); x++)
    {
        if (nums[x] == 0)
        {
            hasZero++;
            idx = x;
        }
        else
            prod *= nums[x];
    }
    if (hasZero > 1)
    {
        vector<int> ans(nums.size(), 0);
        return ans;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (hasZero > 0)
        {
            if (i == idx)
            {
                res.push_back(prod);
            }
            else
            {
                res.push_back(0);
            }
        }
        else
            res.push_back(prod / nums[i]);
    }
    return res;
}

int main()
{
    vector<int> nums{1,2,3,4};
    vector<int> res = product(nums);
    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}