#include<bits/stdc++.h>
using namespace std;

int partitionCount(vector<int> &B){
    int sum = 0;
    int A = B.size();
    for(int i = 0; i < A; i++) sum += B[i];
    if(sum % 3 != 0 ) return 0;
    int sum13rd = sum/3;
    int sum23rd = 2 * sum13rd;
    int currSum = 0;
    int g13rd = 0;
    int count = 0;
    for(int i = 0; i < A - 1; i++) {
        currSum += B[i];
        if(currSum == sum23rd) count += g13rd;
        if(currSum == sum13rd) g13rd++;
    }
    return count;
}

int main(){
    vector<int> B{1, 2, 3, 0, 3};
    int res = partitionCount(B);
    cout<<res;
    return 0;
}