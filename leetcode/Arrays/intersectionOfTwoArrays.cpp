#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &nums1, vector<int> &nums2){
    unordered_map<int,int> ump;
    for(int x: nums2){
        ump[x]++;
    }
    vector<int> res;
    for(int x: nums1){
        auto itr = ump.find(x);
        if(itr != ump.end()){
            if(itr->second > 1){
                res.push_back(itr->first);
                itr->second -= 1;
            } else {
                res.push_back(itr->first);
                ump.erase(x);
            }
        }
    }
    return res;
}

int main(){
    vector<int> nums1{2,1};
    vector<int> nums2{1,1};
    vector<int> ans = findIntersection(nums1, nums2);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}