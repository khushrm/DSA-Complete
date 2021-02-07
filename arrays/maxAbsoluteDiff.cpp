#include<bits/stdc++.h>
using namespace std;

int getMaxDiff(vector<int> &A){
    int n = A.size();
    int minb=INT_MAX,maxb=INT_MIN,minc=INT_MAX,maxc=INT_MIN;
    for(int a=0;a<n;a++){
        if(A[a] + a > maxb){maxb = A[a] + a;}
        if(A[a] + a < minb){minb = A[a] + a;}
        if(A[a] - a > maxc){maxc = A[a] - a;}
        if(A[a] - a < minc){minc = A[a] - a;}
    }
    int b = abs(maxb - minb);
    int c = abs(maxc - minc);
    
    return max(b,c);
}

int main(){
    vector<int> A{1, 3, -1};
    cout<<getMaxDiff(A);
    return 0;
}