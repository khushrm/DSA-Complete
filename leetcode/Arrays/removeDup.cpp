#include<bits/stdc++.h>
using namespace std;

int removeDup(vector<int> &nums){
    if(nums.size() == 0 || nums.size() == 1){
        return nums.size();
    }
    int idx = 1;
    for(int i=1;i<nums.size();i++){
        if(nums[i] != nums[i-1]){
            nums[idx++] = nums[i];
        }
    }
    return idx;
}

int main(){
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    int idx = removeDup(nums);
    for(int i=0;i<idx;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}