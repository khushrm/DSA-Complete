#include<bits/stdc++.h>
using namespace std;

vector<int> addOne(vector<int> &v){
    int start = 0;
    if(v[0] == 0){
        for(int i=0;i<v.size();i++){
            if(v[i] != 0){
                start = i;
                break;
            }
        }
    }
    vector<int> res;
    int i=0,carry=0;
    if(v[v.size() - i - 1] + 1 > 9){
        carry = 1;
        res.push_back(0);
    } else{
        res.push_back(v[v.size() - i - 1] + 1);
    }
    i++;
    while(i < (v.size() - start)){
        if(v[v.size() - i - 1] + carry > 9){
            carry = 1;
            res.push_back(0);
            // v[v.size()-i-1] = 0;
        } else{
            res.push_back(v[v.size()-i-1] + carry );
            // v[v.size() - i - 1] += (carry + 1);
            carry = 0;
        }
        i++;
    }
    if(carry == 0){
        return res;
    } else{
        res.push_back(carry);
        return res;
    }
}

int main(){
    vector<int> v{0,0,9,9,9,9};
    vector<int> ans = addOne(v);
    reverse(ans.begin(),ans.end());
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}