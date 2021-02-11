#include<bits/stdc++.h>
using namespace std;

bool compare(int x, int y){
    string st1 = to_string(x);
    string st2 = to_string(y);
    return (st1+st2)>(st2+st1);
}

int main(){
    vector<int> A{0,0,0};
    vector<int> B = A;
    sort(B.begin(),B.end(),compare);
    bool flag=true;
    string str = "";
    for(int x:B) {
        if(x==0&&flag) continue;
        str += to_string(x);
        flag=false;
    }
    if(flag) cout<<"0";
    cout<<str;
    return 0;
}