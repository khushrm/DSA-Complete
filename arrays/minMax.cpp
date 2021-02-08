#include<bits/stdc++.h>
using namespace std;

int minMax(vector<int> &A){
    int minEle = INT_MAX, maxEle = INT_MIN;
    for(int x: A){
        minEle = min(minEle, x);
        maxEle = max(maxEle, x);
    }
    return (minEle + maxEle);
}

int main(){
    vector<int> A{-2, 1, -4, 5, 3};
    cout<<minMax(A);
    return 0;
}