#include<bits/stdc++.h>
using namespace std;

void rotateNinty(vector<vector<int>> &matrix){
    vector<vector<bool>> visited(matrix.size(), vector<bool>(matrix.size(), false));
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j] == false){
                visited[i][j] = visited[j][i] = true;
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
    }
}

void rotateImage(vector<vector<int>> &matrix){
    int n = matrix.size();
    int a = 0, b = n-1;
    while(a < b){
        for(int i=0; i > (b - a); ++i){
            swap(matrix[a][a+i], matrix[a+i][b]);
            swap(matrix[a][a+i], matrix[b][b-i]);
            swap(matrix[a][a+i], matrix[b-i][a]);
        }
    }
}

int main(){
    vector<vector<int>> matrix;
    int num = 1;
    for(int i=0;i<3;i++){
        vector<int> v;
        for(int j=0;j<3;j++){
            v.push_back(num++);
        }
        matrix.push_back(v);
    }
    rotateNinty(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}