#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<int> &nums, int k){
    if(nums.size() == 0) return;
    if(k > nums.size()){
        k %= nums.size();
    }
    reverse(nums.begin(), nums.begin() + nums.size() - k);
    reverse(nums.begin() + nums.size() - k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    int k = 8;
    rotateArr(nums, k);
    for(int x: nums){
        cout<<x<<" ";
    }
    return 0;
}