#include<bits/stdc++.h>
using namespace std;

int minLightsRequired(vector<int> &a, int B){
    int count = 0,max_count=0;
    for(int i=0;i<a.size();i++){
        if((i - B + 1) <=0 && (i+B-1) >= a.size()-1){
            return 1;
        }
        count++;
    }
    return count;
}

int main(){
    vector<int> a{ 0, 0, 1, 1, 1, 0, 0, 1};
    int B = 3;
    int ans = minLightsRequired(a,B);
    cout<<ans;
    return 0;
}