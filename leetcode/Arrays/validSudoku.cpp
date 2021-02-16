#include<bits/stdc++.h>
using namespace std;

bool validSudoku(vector<vector<char>> &board){
    int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
    for(int i=0;i<board.size();i++){
        for(int j = 0; j < board[i].size(); j++){
            if(board[i][j] != '.'){
                int num = board[i][j] - '0' - 1;
                int k = i/3+ j/3 * 3;
                if(used1[i][num] || used2[j][num] || used3[k][num])
                    return false;
                used1[i][num] = used2[j][num] = used3[k][num] = 1;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>> board{{'8','3','.','.','7','.','.','.','.'}
                            ,{'6','.','.','1','9','5','.','.','.'}
                            ,{'.','9','8','.','.','.','.','6','.'}
                            ,{'8','.','.','.','6','.','.','.','3'}
                            ,{'4','.','.','8','.','3','.','.','1'}
                            ,{'7','.','.','.','2','.','.','.','6'}
                            ,{'.','6','.','.','.','.','2','8','.'}
                            ,{'.','.','.','4','1','9','.','.','5'}
                            ,{'.','.','.','.','8','.','.','7','9'}};
    cout<<validSudoku(board);
    return 0;
}