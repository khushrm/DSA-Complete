#include<bits/stdc++.h>
using namespace std;

int singleNum(vector<int> &nums){
    //xor of number and itself give zero as answer
    int a = 0;
    for(int x: nums){
        a ^= x;
    }
    return a;
}

int main(){
    vector<int> nums{2,2,1};
    cout<<singleNum(nums);
    return 0;
}