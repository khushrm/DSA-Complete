#include<bits/stdc++.h>
using namespace std;

void waveSort(vector<int> &A){
    sort(A.begin(),A.end());
    int i = 0;
    while(i < A.size()-1){
        swap(A[i], A[i+1]);
        i+=2;
    }
}

int main(){
    vector<int> A{4,3,2,1};
    waveSort(A);
    for(int x: A){
        cout<<x<<" ";
    }
    return 0;
}