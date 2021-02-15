#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr){
    unordered_map<int,int> ump;
    for(int i=0;i<arr.size();i++){
        ump.insert({i, arr[i]});
    }
    
}

int main(){
    vector<int> arr{};
    vector<int> ans = twoSum(arr);
    return 0;
}