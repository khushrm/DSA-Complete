#include<bits/stdc++.h>
using namespace std;

vector<int> findPerm(string s, int B){
    vector<int> v;
    int low = 1,high=B,i=0;
    while(low < high && i < B){
        if(s[i] == 'I'){
            v.push_back(low);
            low++;
        } else {
            v.push_back(high);
            high--;
        }
        i++;
    }
    //push_back low or high 
    v.push_back(low);
    return v;
}

int main(){
    string s = "IDIDI";
    int B = 6;
    vector<int> v = findPerm(s, B);
    for(int x: v){
        cout<<x<<" ";
    }
    return 0;
}