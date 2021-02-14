#include<bits/stdc++.h>
using namespace std;

vector<int> getAns(vector<int> &A){
    vector<bool> visited(A.size()+1, false);
    int a,b;
    for(int x: A){
        if(visited[x] == true){a = x;}
        visited[x] = true;
    }
    for(int i=1;i<visited.size();i++){
        if(visited[i] == false){
            b = i;
        }
    }
    return {a, b};
}

int main(){
    vector<int> A{3,1,2,5,3};
    vector<int> ans = getAns(A);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}