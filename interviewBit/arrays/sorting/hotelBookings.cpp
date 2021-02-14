#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first < b.first){
        return true;
    }
    return false;
}

bool isPossible(vector<int> &arrive, vector<int> &depart, int rooms){
    vector<pair<int,int>> v;
    for(int i=0;i<arrive.size();i++){
        v.push_back(make_pair(arrive[i], depart[i]));
    }
    sort(v.begin(),v.end(),compare);
    int oyo = 0,n = v.size();
    for(int i=0;i<n-1;i++){
        if(v[i].second > v[i+1].first){oyo++;}
        if(v[i].second == v[i].first){oyo--;}
    }
    
    return (oyo < rooms);
}

int main(){
    vector<int> arrive{1,2,3,4};
    vector<int> depart{10, 2, 6, 14};
    cout<<isPossible(arrive, depart, 2);
    return 0;
}