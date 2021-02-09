#include<bits/stdc++.h>
using namespace std;

int peakExists(vector<int> &A){
    int n = A.size();
    if(n < 3){
        return 0;
    }
    int leftMax[n],rightMin[n];
    leftMax[0] = A[0];
    rightMin[n-1] = A[n-1];
    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1], A[i]);
    }
    for(int i=n-2;i>=0;i--){
        rightMin[i] = min(rightMin[i+1], A[i]);
    }
    for(int i=1;i<n-1;i++){
        if(A[i] > leftMax[i-1] && A[i] < rightMin[i+1]){
            return 1;
        }
    }
    return 0;
}

int main(){
    vector<int> A{1, 2};
    cout<<peakExists(A);
    return 0;
}