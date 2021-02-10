#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> getAntiDiagonals(vector<vector<int>> &A){
    vector<vector<int>> res;
    for(int i=0;i<A.size() * 2 -1;i++){
        res.push_back({});
    }
    int i=0, j=0;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            res[i+j].push_back(A[i][j]);
        }
    }
    return res;
}
int main(){
    vector<vector<int>> A{{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>> ans = getAntiDiagonals(A);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}