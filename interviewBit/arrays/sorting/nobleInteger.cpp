#include<bits/stdc++.h>
using namespace std;

int nobleInt(vector<int> &A){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int x: A){
        pq.push(x);
    }
    while(!pq.empty()){
        int u = pq.top();
        pq.pop();
        if(!pq.empty()){
            int v = pq.top();
            if(u != v){
                int size = pq.size();
                if(u == size){
                    return 1;
                }
            }
        }
    }
    return -1;
}

int nobleSort(vector<int> &A){
    sort(A.begin(), A.end());
    for(int i=0;i<A.size();i++){
        while(i+1 < A.size() && A[i] == A[i+1]){
            i++;
        }
        if(A[i] == A.size() - i -1){
            return 1;
        }
    }
    return -1;
}

int main(){
    vector<int> A{1, 2, 7, 0, 9, 3, 6, 0, 6};
    cout<<nobleInt(A);
    cout<<nobleSort(A);
    return 0;
}