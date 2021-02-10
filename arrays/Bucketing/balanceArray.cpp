#include<bits/stdc++.h>
using namespace std;

int balArr(vector<int> &A){
    vector<pair<int,int>> prefix, suffix;
    prefix.push_back(make_pair(A[0],0));
    for(int i=1;i<A.size();i++){
        if(i%2 == 0){
            prefix.push_back(make_pair(prefix[i-1].first + A[i], prefix[i-1].second));
        } else{
            prefix.push_back(make_pair(prefix[i-1].first, prefix[i-1].second + A[i]));
        }
    }
    int os=0,es=0;
    if((A.size()-1) % 2 == 0){
        es = A[A.size()-1];
    } else{
        os = A[A.size()-1];
    }
    suffix.push_back(make_pair(es,os));
    for(int i=A.size()-2;i>=0;i--){
        int s = suffix.size();
        if(i%2 == 0){
            suffix.push_back(make_pair(suffix[s-1].first + A[i], suffix[s-1].second));
        } else{
            suffix.push_back(make_pair(suffix[s-1].first, suffix[s-1].second + A[i]));
        }
    }
    reverse(suffix.begin(),suffix.end());
    int i=0,count=0;
    while(i < prefix.size()){
        if((suffix[i].first - prefix[i].first) == (suffix[i].second - prefix[i].second)){count++;}
        i++;
    }
    return count;
}

int main(){
    vector<int> A{9,9,3,5,6};
    cout<<balArr(A);
    
}