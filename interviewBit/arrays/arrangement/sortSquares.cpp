#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrSquares(vector<int> &A){
    int low = 0,high=A.size()-1;
    vector<int> res;
    while(low < high){
        if(A[low]*A[low] > A[high]*A[high]){
            res.push_back(A[low]*A[low]);
            low++;
        }
        else{
            res.push_back(A[high]*A[high]);
            high--;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}

vector<int> sortSquares(vector<int> &A){
    vector<int> res;
    int i=0,j;
    while(A[i] < 0){
        i++;
    }
    j = i;
    i--;
    while(i >= 0 && j < A.size()){
        if(abs(A[i]) < abs(A[j])){
            res.push_back(A[i]*A[i]);
            i--;
        }
        else{
            res.push_back(A[j]*A[j]);
            j++;
        }
    }
    while(i >= 0){
        res.push_back(A[i]*A[i]);
        i--;
    }
    while(j < A.size()){
        res.push_back(A[j]*A[j]);
        j++;
    }
    return res;
}

int main(){
    vector<int> A{-6, -3, -1, 2, 4, 5};
    vector<int> ans = sortArrSquares(A);
    vector<int> res = sortSquares(A);
    for(int x: res){
        cout<<x<<" ";
    }
    return 0;
}