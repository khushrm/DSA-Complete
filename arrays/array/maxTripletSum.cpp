#include<bits/stdc++.h>
using namespace std;


int max_triplet_sum(vector<int> &arr){
    int sum=0;
    vector<int> right(arr.size(),0);
    set<int> s;
    s.insert(arr[0]);
    for(int i=arr.size()-2;i>=0;i--){
        int mx = max(right[i+1], arr[i+1]);
        if(mx > arr[i]){
            right[i] = mx;
        }
    }
    for(int i=1;i<arr.size()-1;i++){
        s.insert(arr[i]);
        if(right[i] != 0){
            auto itr = s.find(arr[i]);
            if(itr != s.begin()){
                cout<<*itr<<endl;
                sum = max(sum, *(--itr) + right[i] + arr[i]);
            }
        }
    }
    return sum;
}

int main(){
    vector<int> arr{2, 5, 3, 1, 4, 9};
    cout<<max_triplet_sum(arr);
    return 0;
}