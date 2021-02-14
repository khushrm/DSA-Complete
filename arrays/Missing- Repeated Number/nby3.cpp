#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &A){
    int count1=0,count2=0,first=INT_MAX, second=INT_MAX, n = A.size();
    for(int i=0;i<n;i++){
        if(A[i] == first){
            count1++;
        } else if(A[i] == second){
            count2++;
        }
        else if(count1 == 0){
            count1 = 1;
            first = A[i];
        }
        else if(count2 == 0){
            count2 = 1;
            second = A[i];
        } else{
            count1--;
            count2--;
        }
    }
    count1=count2=0;
    for(int i=0;i<n;i++){
        if(A[i] == first) count1++;
        else if(A[i] == second) count2++;
    }
    if(count1 > n/3) return first;
    if(count2 > n/3) return second;
    return -1;
}

int main(){
    vector<int> A{1,1,1,2,3,4,5};
    cout<<findMissing(A);
    return 0;
}