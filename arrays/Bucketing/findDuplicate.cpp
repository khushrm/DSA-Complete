#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &A){
    vector<bool> visited(A.size(), false);
    int i=0;
    while(!visited[A[i]]){
        visited[A[i]] = true;
        i = A[i];
    }
    return A[i];
}

int main(){
    vector<int> A{3,4,1,2,1};
    cout<<findDuplicate(A);
    return 0;
}
