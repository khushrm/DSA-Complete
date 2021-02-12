#include<bits/stdc++.h>
using namespace std;

void rotateNinty(vector<vector<int>> &A){
    vector<vector<bool>> visited(A.size(), vector<bool>(A.size(), false));
    int n = A.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j] == false){
                visited[i][j] = visited[j][i] = true;
                swap(A[i][j],A[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(A[i][j], A[i][n-j-1]);
        }
    }
}

int main(){
    vector<vector<int>> A;
    int num = 1;
    for(int i=0;i<3;i++){
        vector<int> v;
        for(int j=0;j<3;j++){
            v.push_back(num++);
        }
        A.push_back(v);
    }
    rotateNinty(A);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}