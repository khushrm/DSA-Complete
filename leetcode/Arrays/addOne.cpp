#include<bits/stdc++.h>
using namespace std;

vector<int> addOne(vector<int> &digits){
    reverse(digits.begin(), digits.end());
    vector<int> res;
    int carry = 1;
    for(int i=0;i<digits.size();i++){
        int sum = digits[i] + carry;
        res.push_back(sum % 10);
        carry = sum / 10;
    }
    while(carry){
        res.push_back(carry % 10);
        carry /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    vector<int> digits{4,3,2,9};
    vector<int> res = addOne(digits);
    for(int x: res){
        cout<<x<<" ";
    }
    return 0;
}