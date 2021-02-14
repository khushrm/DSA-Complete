#include<bits/stdc++.h>
using namespace std;


vector<int> getPascalRow(int A){
    if(A == 0){return {1};}
    if(A == 1){return {1,1};}
    vector<int> a{1}, b{1,1};
    int i = 2;
    while(i <= A){
        if(i%2 == 0){
            a = {};
            for(int j=0;j<i+1;j++){
                if(j == 0 || j== i) {a.push_back(1);}
                else{
                    int sum = b[j]+b[j-1];
                    a.push_back(sum);
                }
            }
        } else {
            b = {};
            for(int j=0;j<i+1;j++){
                if(j == 0 || j== i){b.push_back(1);}
                else{
                    int sum = a[j]+a[j-1];
                    b.push_back(sum);
                }
            }
        }
        i++;
    }
    if(A % 2 == 0){
        return a;
    } 
    return b;
}

vector<int> getPascalFastest(int A){
    vector<int> temp;
    int n =1;
    for(int col=0;col <= A;col++){
        temp.push_back(n);
        n = n * (A - col)/ (col + 1) ; // mathematics
    }
    return temp;
}

int main(){
    int A = 3;
    vector<int> res = getPascalRow(A);
    vector<int> ans = getPascalFastest(A);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}