#include<bits/stdc++.h>
using namespace std;

int find_min_steps(vector<int> A,vector<int> B){
    int j=0,steps=0;
    for(int i=0;i<A.size()-1 && j<B.size()-1;i++){
        int left_steps = abs(A[i] - A[i+1]);
        int right_steps = abs(B[j] - B[j+1]);
        steps += max(right_steps ,left_steps);
        j++;
    }
    return steps;
}
int main(){
    vector<int> A = {0, 1, 1};
    vector<int> B = {0, 1, 2};
    cout<<find_min_steps(A,B);
    return 0;
}