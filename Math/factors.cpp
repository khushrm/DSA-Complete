#include<bits/stdc++.h>
using namespace std;

void getFactors(int A,int i,vector<int> &ans){
    if(i > sqrt(A)){
        return;
    }
    if(A%i == 0){
        ans.push_back(i);
    }
    getFactors(A,i+1, ans);
    if(A%i == 0 && i != sqrt(A)){
        ans.push_back(A/i);
    }
}

int main(){
    vector<int> ans;
    int A = 36;
    getFactors(A,1,ans);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}