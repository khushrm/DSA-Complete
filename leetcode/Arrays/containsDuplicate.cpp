#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums){
    unordered_map<int,int> umap;
    for(int i=0;i<nums.size();i++){
        umap[nums[i]]++;
    }
    for(auto y: umap){
        if(y.second > 1){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> nums{1,1,1,3,3,4,3,2,4,2};
    cout<<containsDuplicate(nums);
    return 0;
}