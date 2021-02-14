#include<bits/stdc++.h>
using namespace std;

vector<int> maxUNS(vector<int> &A){
    int left = 0,right=0,leftMax = A[0],rightMin = A[A.size()-1];
    for(int i=0;i<A.size();i++){
        if(A[i] < leftMax) right = i;
        leftMax = max(leftMax, A[i]);
    }
    for(int i=A.size()-1;i>=0;i--){
        if(A[i] > rightMin) left = i;
        rightMin = min(rightMin, A[i]);
    }
    if(left == right){return {-1};}
    return {left, right};
}

int main(){
    vector<int> A{3, 3, 4, 5, 5, 9, 11, 13, 14, 15, 15, 16, 15, 20, 16};
    vector<int> ans = maxUNS(A);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}