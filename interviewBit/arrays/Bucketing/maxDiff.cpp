#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> &A){
    if(A.size()<2) return 0;
    priority_queue<int,vector<int>, greater<int>>pq;
    for(int i : A)
        pq.push(i);
    int mx =INT_MIN;
    int first = pq.top(); pq.pop();
    while(!pq.empty())
    {
        int second = pq.top(); pq.pop();
        mx = max(mx, second-first);
        first = second;
    }
    return mx;
}

int main(){
    vector<int> A{1,10};
    cout<<maxDiff(A);
    
    return 0;
}