#include<bits/stdc++.h>
using namespace std;

void setMatrix(vector<vector<int>> &A){
    int rows = A.size(), cols = A[0].size();
    bool firstRowHasZero = false, firstColHasZero = false;
    for(int i=0;i<cols;i++){
        if(A[0][i] == 0){
            firstRowHasZero = true;
            break;
        }
    }
    for(int j=0;j<rows;j++){
        if(A[j][0] == 0){
            firstColHasZero = true;
            break;
        }
    }
    for(int i=1;i<rows;i++){
        for(int j=1;j<cols;j++){
            if(A[i][j] == 0){
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    for(int i=1;i<rows;i++){
        for(int j=1;j<cols;j++){
            if(A[i][0] == 0 || A[0][j] == 0) A[i][j] = 0;
        }
    }
    if(firstRowHasZero){
        for(int i=0;i<cols;i++){
            A[0][i] = 0;
        }
    }
    if(firstColHasZero){
        for(int i=0;i<rows;i++){
            A[i][0] = 0;
        }
    }
}

int main(){
    vector<vector<int>> A{{1, 0, 1, 1},{1, 0, 0, 1}, {1, 1, 1, 1}};
    setMatrix(A);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}