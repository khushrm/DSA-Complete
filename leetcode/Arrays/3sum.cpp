#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum(vector<int> &nums){
    // if(nums.size() == 0 || nums.size() == 1)
    sort(nums.begin(), nums.end());
    vector<vector<int>> v;
    int i;
    for(i=0;i<nums.size();i++){
        int num = -nums[i];
        int front = i+1;
        int back = nums.size()-1;
        while(front < back){
            int sum = nums[front] + nums[back];
            if(sum < num){
                front++;
            } else if(sum > num){
                back--;
            } else {
                vector<int> triplet = {-num, nums[front], nums[back]};
                v.push_back(triplet);

                while(front < back && nums[front] == triplet[1]) {front++;}
                while(front < back && nums[back] == triplet[2]) {back--;}
            }
        }
        while(i+1 < nums.size() && nums[i+1]==nums[i]) {i++;}
        
    }
    return v;
}

int main(){
    vector<int> nums{-1,0,1,2,-1,-4};
    vector<vector<int>> ans = sum(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}