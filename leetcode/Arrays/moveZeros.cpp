#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &nums){
    int idx = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            // nums[idx++] = nums[i];
            swap(nums[idx], nums[i]);
            idx++;
        }
    }
}

int main(){
    vector<int> nums{0,1,0,3,12};
    moveZeros(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}