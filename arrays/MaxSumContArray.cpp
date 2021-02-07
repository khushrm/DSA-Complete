#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &A){
    int n = A.size(),sum = -1001,res=-1001;
    for(int i=0;i<n;i++){
        sum = max(sum+A[i], A[i]);
        res = max(res,sum);
    }
    return res;
}
int main(){
    vector<int> A{1, 2, 3, 4, -10};
    cout<<maxSum(A);
    return 0;
}