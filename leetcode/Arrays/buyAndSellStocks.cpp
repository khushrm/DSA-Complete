#include<bits/stdc++.h>
using namespace std;

int maxProf(vector<int> &prices){
    int sum = 0;
    for(int i=1;i<prices.size();i++){
        if(prices[i] > prices[i-1]){
            sum += prices[i] - prices[i-1];
        }
    }
    return sum;
}

int main(){
    vector<int> prices{1,2,3,4,5};
    cout<<maxProf(prices);
    return 0;
}