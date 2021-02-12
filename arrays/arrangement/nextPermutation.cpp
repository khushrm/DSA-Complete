#include<bits/stdc++.h>
using namespace std;

vector<int> nextPerm(vector<int> &A){
    int idx = -1,n=A.size();
    for(int i=n-2;i>=0;i--){
        if(A[i] < A[i+1]){
            idx = i;
            break;
        }
    }
    reverse(A.begin() + idx+ 1, A.end());
        for(int i=idx+1;i<n;i++){
            if(A[idx] < A[i]){
                swap(A[idx], A[i]);
                break;
            }
        }
    return A;
}

int main(){
    vector<int> A{3,2,1};
    vector<int> ans = nextPerm(A);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}