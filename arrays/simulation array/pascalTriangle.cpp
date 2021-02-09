#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascalTriangle(int A){
    vector<vector<int>> res;
    if(A == 0){
        return res;
    }
    res.push_back({1});
    if(A == 1){
        return res;
    }
    int i=1;
    while(i < A){
        vector<int> v;
        for(int j=0;j<i+1;j++){
            if(j == 0 || j == i){v.push_back(1);}
            else{
                int sum = res[i-1][j] + res[i-1][j-1];
                v.push_back(sum);
            }
        }
        i++;
        res.push_back(v);
    }
    return res;
}

int main(){
    int A = 5;
    vector<vector<int>> ans = pascalTriangle(A);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}